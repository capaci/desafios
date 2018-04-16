#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int casas, n;
    scanf("%d", &n);
    while (n) {
        scanf("%d", &casas);
        printf("%lli kg\n", (long long) (pow(2, casas) / 12000));
        n--;
    }
    return 0;
}

