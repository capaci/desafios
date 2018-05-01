#include <stdio.h>
#include <math.h>

int main() {
    int n, l, h, c;

    while (scanf("%d%d%d%d", &n, &h, &c, &l) != EOF) {
        printf("%.4lf\n", (sqrt(h*h + c*c) * l * n)/10000);
    }


    return 0;
}
