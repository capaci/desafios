#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1


/***
 * di eh o i-esimo segmento do display, onde i = [0..6]
 * um display tradicional poderia ser representado da seguinte forma:
 * 
 *   d0 d0
 * d1     d2
 * d1     d2
 * d1     d2
 *   d3 d3  
 * d4     d5
 * d4     d5
 * d4     d5
 *   d6 d6  
 *
 * cada numero necessita de alguns segmentos ligados somente
 *
 */

// declaracao das funcoes auxiliares
void imprime_seg_deitado (int n, int segmento);
void imprime_segs_em_pe (int n, int segmento1, int segmento2);

int main () {
    int n, d0, d1, d2, d3, d4, d5, d6, d7, d8;
    scanf("%d", &n);

    // como n=1 eh um caso simples, imprime sem executar o restante do codigo
    if (n == 1) {
        printf("1\n");
        return 0;
    }

    // define quais segmentos devem estar ligados dependendo do numero dado
    d0 = n == 2 || n == 3 || n == 5 || n == 6 || n == 7 || n == 8 || n == 9 ? TRUE : FALSE;
    d1 = n == 4 || n == 5 || n == 6 || n == 8 || n == 9 ? TRUE : FALSE;
    d2 = n == 2 || n == 3 || n == 4 || n == 7 || n == 8 || n == 9 ? TRUE : FALSE;
    d3 = n == 2 || n == 3 || n == 4 || n == 5 || n == 6 || n == 8 || n == 9 ? TRUE : FALSE;
    d4 = n == 2 || n == 6 || n == 8 ? TRUE : FALSE;
    d5 = n == 3 || n == 4 || n == 5 || n == 6 || n == 7 || n == 8 || n == 9 ? TRUE : FALSE;
    d6 = n == 2 || n == 3 || n == 5 || n == 6 || n == 8 || n == 9 ? TRUE : FALSE;

    imprime_seg_deitado(n, d0);
    imprime_segs_em_pe(n, d1, d2);
    imprime_seg_deitado(n, d3);
    imprime_segs_em_pe(n, d4, d5);
    imprime_seg_deitado(n, d6);

    return 0;
}

/***
 * int n: numero a ser impresso
 * int segmento: informacao se um segmento di esta ligado ou nao
 *
 * Caso o segmento esteja ligado, o imprime na horizontal.
 *
 */
inline void imprime_seg_deitado (int n, int segmento) {
    int i;
    if (segmento) {
        for (i = 0; i < n; i++) printf("%d", n);
        printf("\n");
    }
}

/***
 * int n: numero a ser impresso
 * int segmento1: informacao se um segmento di, que deve ficar a ESQUERDA, esta ligado ou nao
 * int segmento2: informacao se um segmento di, que deve ficar a DIREITA, esta ligado ou nao
 *
 * Imprime cada segmento caso esteja ligado. Caso contrario, coloca um caracter vazio(' ') no lugar.
 *
 */
inline void imprime_segs_em_pe (int n, int segmento1, int segmento2) {
    int i, j;
    if (segmento1) {
        if (segmento2) { // os dois segmentos estam ligados
            for (i = 0; i < n; i++) {
                printf("%d", n);
                for (j = 0; j < n - 2; j++) printf(" "); // espaco entre os segmentos
                printf("%d\n", n);
            }
        } else { // somente segmento1
            for (i = 0; i < n; i++) {
                printf("%d\n", n);
            }
        }
    } else if (segmento2) { // somente segmento2
        for (i = 0; i < n; i++) {
            for (j = 0; j < n - 1; j++) printf(" "); // espaco ate o segmento2
            printf("%d\n", n);
        }
    }
}

