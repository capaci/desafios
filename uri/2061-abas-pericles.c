#include <stdio.h>
 
int main() {
    int n, m;
    char a[7];

    scanf("%d", &n);
    scanf("%d", &m);
    while (m) {
        scanf("%s", a);
        if (strcmp("clicou", a) == 0) {
            n--;
        } else {
            n++;
        }

        m--;
    }
    printf("%d\n", n);
    return 0;
}
