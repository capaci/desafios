#include <stdio.h>
#include <string.h>
 
int main() {
    char nome[26];
    int n;
    scanf("%d", &n);

    while (n) {
        scanf("%s", nome);
        if (strcmp(nome, "Batmain")) {
            printf("Y\n");
        } else {
            printf("N\n");
        }
        n--;
    }
    
    return 0;
}
