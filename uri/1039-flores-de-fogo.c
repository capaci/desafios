#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int r1, x1, y1, r2, x2, y2;
    double d;
    while (scanf("%d%d%d%d%d%d", &r1, &x1, &y1, &r2, &x2, &y2) != EOF) {
        if (r1 < r2) {
            printf("MORTO\n");
            continue;
        }
        
        d = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));

        if (r1 < d+r2)
            printf("MORTO\n");
        else {
            printf("RICO\n");
        }
    }
 
    return 0;
}