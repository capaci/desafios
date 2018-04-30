#include <stdio.h>

// http://homepages.dcc.ufmg.br/~lucasresenderc/pdf/RetasEmPosGeral.pdf

int main() {
    int t, n;
    scanf("%d", &t);
    while (t) {
        scanf("%d", &n);
        printf("%d\n", (n*n+n+2)/2);
        t--;
    }

    return 0;
}
