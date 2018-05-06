#include <stdio.h>

int main() {
    int a;
    float b;
    char c, s[50];
    scanf("%d",&a);
    scanf("%f",&b);
    getchar();
    scanf("%c",&c);
    getchar();
    gets(s);
    
    printf("%d%.6f%c%s\n", a, b, c, s);
    printf("%d\t%.6f\t%c\t%s\n", a, b, c, s);
    printf("%10d%10.6f%10c%10s\n", a, b, c, s);

    return 0;
}
