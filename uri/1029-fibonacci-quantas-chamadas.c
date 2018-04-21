#include<stdlib.h>
#include<stdio.h>

#define MAX 39

// f(n) = f(n-1) + f(n-2), retorna o n-esimo numero da sequencia de fibonacci
// c(n) = c(n-1) + c(n-2) + 2, retorna o numero de chamadas recursivas para descobrir f(n)
int main () {
    int i, n, n_chamadas[MAX], n_sequencia[MAX], ultimo = 1, x;
    // deixa os primeiros elementos ja preparados. O caso de i = 2 eh por conta do numero de chamadas, senao c(2) retor
    n_chamadas[0] = 0;
    n_chamadas[1] = 0;
    n_sequencia[0] = 0;
    n_sequencia[1] = 1;

    scanf("%d", &n);
    while (n) {
        scanf("%d", &x);
        if (x == 0) {
            printf("fib(0) = 0 calls = 0\n");
        } else if (x == 1) {
            printf("fib(1) = 0 calls = 1\n");
        } else {
            if (x > ultimo) {
                for (i = ultimo + 1; i <= x; i++) {
                    n_sequencia[i] = n_sequencia[i-1] + n_sequencia[i-2];
                    n_chamadas[i] = n_chamadas[i-1] + n_chamadas[i-2] + 2;
                }
                ultimo = x;
            }
            printf("fib(%d) = %d calls = %d\n", x, n_chamadas[x], n_sequencia[x]);
        }

        n--;
    }

    return 0;
}

