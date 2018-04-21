#include <stdio.h>
 
int main() {
 
    char c;
    int n, count=0;

    scanf("%d", &n);
    scanf("%c", &c);
    while (n) {
        scanf("%c", &c);
        while (c != '\n') {
            count++;
            scanf("%c", &c);
        }
        printf("%.2f\n", count/100.00);
        count = 0;
        n--;
    }
 
    return 0;
}
