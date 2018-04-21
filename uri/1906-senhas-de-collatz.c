#include <stdio.h>
#include <stdlib.h>


int main() {
    long int *seq, *faz_seq;
    long int n, k, count, i, t, j;
    scanf("%ld%ld", &n, &k);

    if (k == 1) {
        printf("%ld\n", n);
        return 0;
    }
    // guarda numeros da sequencia
    seq = malloc (sizeof(long int) * n + 1);
    // guarda se um numero i faz sequencia
    faz_seq = calloc(n + 1, sizeof(long int));
        
    // calcula sequencia
    for (i = 1;i < n; i = i + 2) {
        seq[i] = i*3+1;
        seq[i+1] = (i+1)/2;
    }
    if (n % 2 != 0) seq[n] = n*3 + 1;

    // verifica se, para cada elemento, existe uma sequencia de tamanho k
    count = 0;
    i = 1;
    while (i <= n) {
        j = 1;
        t = i;
        while (j < k) {
            if (faz_seq[t] == 1){
                j = k;
                break;
            } else if (seq[t] < n) {
                t = seq[t];
                j++;
            } else {
                break;
            }
        }
        if (j == k) {
            count++;
            faz_seq[i] = 1;
        }
        i++;
    }

    printf("%ld\n", count);
    
}
