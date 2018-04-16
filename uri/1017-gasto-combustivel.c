#include <stdio.h>

void main() {
    float horas, vm;
    scanf("%f%f", &horas, &vm);
    printf("%.3f\n", (vm * horas) / 12);
}
