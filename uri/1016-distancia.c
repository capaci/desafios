#include <stdio.h>

void main(int argc, char const *argv[]) {
    float xvel = 1, yvel = 1.5;
    int d, i;

    scanf("%d", &d);
    i = 1;
    while (yvel * i - i < d){
        i++;
    }
    printf("%d minutos\n", i);
}
