#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define FALSE 0
#define TRUE 1

int main () {
    int ehprimo, n, numero, i;
    double raiz;
    scanf("%d", &n);
    while (n) {
        scanf("%d", &numero);
        ehprimo = TRUE;

        if (numero == 2) {
            ehprimo = TRUE; 
        } else if ((numero / 2) * 2 == numero) {
            ehprimo = FALSE;
        } else {
            raiz = sqrt(numero);
            for (i = 3; i <= raiz; i+=2) {
                if ((numero / i) * i == numero) {
                    ehprimo = FALSE;
                    break;
                }
            }
        }

        printf(ehprimo ? "Prime\n" : "Not Prime\n"); 
        n--;
    }

    return 0;
}

