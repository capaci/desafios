#include<stdlib.h>
#include<stdio.h>

// o problema consiste em implementar um maximo divisor comum
int main () {
    int n, f1, f2, maior, menor, resto = 0;
    scanf("%d", &n);
    while (n) {
        scanf("%d%d", &f1, &f2);

        if (f1 > f2) {
            maior = f1;
            menor = f2;
        } else {
            maior = f2;
            menor = f1;
        }

        resto = maior % menor;
        while (resto != 0) {
            maior = menor;
            menor = resto;
            resto = maior % menor;
        }

        printf("%d\n", menor);

        n--;
    }

    return 0;
}

