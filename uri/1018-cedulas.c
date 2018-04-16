#include <stdio.h>

void main() {
    

    int n, resto;
    float cem, cinq, vinte, dez, cinco, dois, um;

    scanf("%d", &n);
    
    cem = n/100;
    resto = n % 100;
    
    cinq = resto/50;
    resto = resto % 50;

    vinte = resto/20;
    resto = resto % 20;

    dez = resto / 10;
    resto = resto % 10;

    cinco = resto / 5;
    resto = resto % 5;

    dois = resto / 2;
    um = resto % 2;

    printf("%d\n", n);
    printf("%.0f nota(s) de R$ 100,00\n", cem);
    printf("%.0f nota(s) de R$ 50,00\n", cinq);
    printf("%.0f nota(s) de R$ 20,00\n", vinte);
    printf("%.0f nota(s) de R$ 10,00\n", dez);
    printf("%.0f nota(s) de R$ 5,00\n", cinco);
    printf("%.0f nota(s) de R$ 2,00\n", dois);
    printf("%.0f nota(s) de R$ 1,00\n", um);
}
