#include <stdio.h>
#include <stdlib.h>

#define SUBINDO 1
#define DESCENDO 0

int main() {
    int i, n, primeiro, anterior, atual, count, acao, primeira_acao;
    scanf("%d", &n);
    while (n) {
        count = 0;
        scanf("%d", &primeiro);
        anterior = primeiro;
        scanf("%d", &atual);
        if (atual > primeiro) {
            primeira_acao = SUBINDO;
            acao = SUBINDO;
        } else {
            primeira_acao = DESCENDO;
            acao = DESCENDO;
        }

        for (i = 2; i < n; i++) {
            anterior = atual;
            scanf("%d", &atual);
            if (atual > anterior && acao == DESCENDO) {
                count++;
                acao = SUBINDO;
            } else if (atual < anterior && acao == SUBINDO) {
                count++;
                acao = DESCENDO;
            }
        }
    
        if (primeiro > atual && acao == DESCENDO) {
            acao = SUBINDO;
            count++;
        } else if (primeiro < atual && acao == SUBINDO) {
            acao = DESCENDO;
            count++;
        }
        if (acao != primeira_acao) count++;

        printf("%d\n", count);
        scanf("%d", &n);
    }
    return 0;
}
