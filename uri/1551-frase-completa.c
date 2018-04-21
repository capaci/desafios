#include <stdio.h>
#include <string.h>
 
int main() {
    int n, count, letras[27];
    char c;
    scanf("%d", &n);
    scanf("%c", &c);
    while (n) {
        count = 0;
        memset(letras, 0, sizeof(int)*27);
        scanf("%c", &c);
        while (c != '\n') {
            if (c >= 'a' && c <= 'z' && letras[(int) c-97] == 0) {
                //printf("%c", c);
                count++;
                letras[(int) c-97] = 1;
            }
            scanf("%c", &c);
        }
        if (count <= 13) {
            printf("frase mal elaborada\n");
        } else if (count < 26) {
            printf("frase quase completa\n");
        } else {
            printf("frase completa\n");
        }

        n--;
    }




    return 0;
}
