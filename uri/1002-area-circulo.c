#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159

void main()
{
    double raio;

    scanf("%lf", &raio);

    double area = PI * raio * raio;

    printf("%.4lf", area);
}