#include <stdio.h>
#include <math.h>
 
int main() {
    int l, c, r1, r2, r1_2, r2_2, x1, x2, y1, y2, i=0;
    double d;
    scanf("%d%d%d%d", &l, &c, &r1, &r2);
    while (l != 0 && c != 0 && r1 != 0 && r2 != 0) {
        r1_2 = 2*r1;
        r2_2 = 2*r2;
        if (r1_2 > l || r1_2 > c || r2_2 > l || r2_2 > c) {
            printf("N\n");
            scanf("%d%d%d%d", &l, &c, &r1, &r2);
            continue;
        }

        x1 = r1;
        y1 = r1;
        x2 = l - r2;
        y2 = c - r2;
        d = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
        if (r1 + r2 > d) {
            printf("N\n");
        } else {
            printf("S\n");
        }
        scanf("%d%d%d%d", &l, &c, &r1, &r2);
    }
 
    return 0;
}