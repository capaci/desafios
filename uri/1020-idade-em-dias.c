#include <stdio.h>
 
int main() {
    int a, m, d;
    a = m = d = 0;
    scanf("%d", &d);

    if (d >= 365) {
        a = d / 365;
        d = d % 365;
    }

    if (d >= 30) {
        m = d / 30;
        d = d % 30;
    }

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", a, m, d); 
 
    return 0;
}
