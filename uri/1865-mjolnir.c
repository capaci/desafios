#include <stdio.h>

void main() {
    int c, x;
    char nome[1000];

    scanf("%d", &c);

    for(;c>0;c--){
        scanf("%s", nome);
        getchar();
        scanf("%d", &x);
        if (strcmp(nome,"Thor")){
            printf("N\n");
        } else {
            printf("Y\n");
        }
    }
}
