#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, raiz_delta, a_2, m_b;

    scanf("%lf%lf%lf", &a, &b, &c);
    if (a == 0) {
        printf("Impossivel calcular\n");
        return 1;
    }

    delta = b * b - (4 * a * c);
    if (delta < 0) {
        printf("Impossivel calcular\n");
        return 1;
    }
    raiz_delta = sqrt(delta);
    m_b = -b;
    a_2 = 2*a;
    
    printf("R1 = %.5lf\nR2 = %.5lf\n", (m_b + raiz_delta)/a_2, (m_b - raiz_delta)/a_2);

    return 0;
}
