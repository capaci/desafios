#include<stdio.h>
#include<stdlib.h>

#define MAX_LENGTH 1000

int main () {
    char c, palavra[MAX_LENGTH + 1];
    palavra[MAX_LENGTH] = '\0';
    int n, tamanho, i;
    scanf("%d", &n);
    scanf("%c", &c);

    while (n) {
        tamanho = 0;
        scanf("%c", &c);
        // executa as rodadas fora de ordem e ja durante a leitura
        while (c != '\n') {
            tamanho++;
            palavra[MAX_LENGTH - tamanho] = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? c + 3 : c;
            if (tamanho % 2 != 0) palavra[MAX_LENGTH - ((tamanho + 1) / 2)] = palavra[MAX_LENGTH - ((tamanho + 1) / 2)] - 1;
            scanf("%c", &c);
        }
        printf("%s\n", &palavra[MAX_LENGTH - tamanho]);
        n--;
    }
    return 0;
}
