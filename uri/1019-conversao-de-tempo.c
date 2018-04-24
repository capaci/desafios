#include <stdio.h>
 
int main() {
    int h, m, s;
    h = m = s = 0;
    scanf("%d", &s);

    if (s >= 3600) {
        h = s / 3600;
        s = s % 3600;
    }

    if (s >= 60) {
        m = s / 60;
        s = s % 60;
    }

    printf("%d:%d:%d\n", h, m, s); 
 
    return 0;
}
