#include <stdio.h>
#include <math.h>
 
int main() {
    double k, l;
    k = sin(108 * M_PI / 180) / sin(63 * M_PI / 180);
    while (scanf("%lf", &l) != EOF) {
        printf("%.10lf\n", l*k);
    }
    return 0;
}
