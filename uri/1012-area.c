#include <stdio.h>
#include <stdlib.h>
// #include <math.h>

#define PI 3.14159

void main()
{
    float a,b,c;

    scanf("%f%f%f", &a, &b, &c);


// a) a área do triângulo retângulo que tem A por base e C por altura.
    printf("TRIANGULO: %.3lf\n", (a*c)/2);

// b) a área do círculo de raio C. (pi = 3.14159)
    printf("CIRCULO: %.3lf\n", PI * c * c);

// c) a área do trapézio que tem A e B por bases e C por altura.
    printf("TRAPEZIO: %.3lf\n", ((a+b)*c)/2);

// d) a área do quadrado que tem lado B.
    printf("QUADRADO: %.3lf\n", b*b);

// e) a área do retângulo que tem lados A e B.
    printf("RETANGULO: %.3lf\n", a*b);


    // printf("%.4lf", area);
}