#include <stdio.h>
 
int main() {
    int p, n, i, imenor, menor;
    scanf("%d", &n);
    scanf("%d", &menor);
    imenor = 1;
    for (i = 2; i <= n; i++) {
        scanf("%d", &p);
        if (p < menor) {
            menor = p;
            imenor = i;
        }
    }

    printf("%d\n", imenor);

    return 0;
}
