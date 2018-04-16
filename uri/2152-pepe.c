#include <stdio.h>
 
int main() {
    int n, h, m, o;

    scanf("%d", &n);
    while (n) {
        scanf("%d%d%d", &h, &m, &o);
        printf("%02d:%02d - A porta ", h, m);

        if (o) {
            printf("abriu!\n");
        } else {
            printf("fechou!\n");
        }
        n--;
    }

    return 0;
}
