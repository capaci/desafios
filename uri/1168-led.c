#include <stdio.h>
#include <stdlib.h>


int main () {
    char c;
    int n, count;
    scanf("%d", &n);
    scanf("%c", &c);
    while (n) {
        count = 0;
        scanf("%c", &c);
        while (c != '\n') {
   //         printf("%c\n", c);
            switch (c) {
                case '0':
                case '6':
                case '9':
                    count += 6;
                    break;
                case '1':
                    count += 2;
                    break;
                case '2':
                case '3':
                case '5':
                    count += 5;
                    break;
                case '4':
                    count += 4;
                    break;
                case '7':
                    count += 3;
                    break;
                case '8':
                    count += 7;
                    break;
            }
            scanf("%c", &c);
        }
        printf("%d leds\n", count);
        n--;
    }

    return 0;
}



