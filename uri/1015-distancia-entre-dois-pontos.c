#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    float x1, y1, x2, y2;

    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
    printf("%.4f\n", sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)) );
}