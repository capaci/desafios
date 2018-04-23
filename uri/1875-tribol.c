#include <stdio.h>

int main() {
    int n, gols, r = 0, g = 0, b = 0;
    char m, s;

    scanf("%d", &n);
    while (n) {
        scanf("%d", &gols);
        scanf("%c", &m);
        while (gols) {
            scanf("%c %c\n", &m, &s);
            if (m == 'R') r += s == 'G' ? 2 : 1;
            else if (m == 'G') g += s == 'B' ? 2 : 1;
            else if (m == 'B') b += s == 'R' ? 2 : 1;
            gols--;
        }

        if (r == g && r == b) printf("trempate\n");
        else if (r == b && r > g || r == g && r > b || b == g && b > r) printf("empate\n");
        else if (r > b && r > g) printf("red\n");
        else if (g > r && g > b) printf("green\n");
        else if (b > r && b > g) printf("blue\n");

        r = 0; g = 0; b = 0;
        n--;
    }

    return 0;
}



