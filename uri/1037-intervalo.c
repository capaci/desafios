#include <stdio.h>
 
int main() {
    double d;

    scanf("%lf", &d);
    if (d >= 0 && d <= 25) {
        printf("Intervalo [0,25]\n");
    } else if (d > 25 && d <= 50) {
        printf("Intervalo (25,50]\n");
    } else if (d > 50 && d <= 75) {
        printf("Intervalo (50,75]\n");
    } else if (d > 75 && d <= 100) {
        printf("Intervalo (75,100]\n");
    } else {
        printf("Fora de intervalo\n");
    }

    return 0;
}
