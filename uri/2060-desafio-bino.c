#include <stdio.h>
 
int main() {
    int i, 
        n, 
        dois = 0,
        tres = 0,
        quatro = 0,
        cinco = 0;

    scanf("%d", &n);
    while (n) {
        scanf("%d", &i);
 
        if (i % 2 == 0) {
            dois++;
        }        

        if (i % 3 == 0) {
            tres++;
        }        

        if (i % 4 == 0) {
            quatro++;
        }        

        if (i % 5 == 0) {
            cinco++;
        }
        n--;
    }

    printf("%d Multiplo(s) de 2\n", dois);
    printf("%d Multiplo(s) de 3\n", tres);
    printf("%d Multiplo(s) de 4\n", quatro);
    printf("%d Multiplo(s) de 5\n", cinco);

    return 0;
}
