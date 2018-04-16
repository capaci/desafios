#include <stdio.h>
#include <stdlib.h>
void main()
{
    float a,b;

    scanf("%f%f", &a, &b);
    printf("%.3f km/l\n", a/b);
}