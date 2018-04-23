#include <stdio.h>
#include <math.h>

/*
 * exercicio resolvido com a ajuda desta resposta: https://math.stackexchange.com/a/595646
 */

int main() {
    double r, area1, area2, area3, r_quadrado, pi_r_quadrado;

    while (scanf("%lf", &r) != EOF) {
        r_quadrado = r * r;
        pi_r_quadrado = M_PI * r_quadrado;
        area1 = (pi_r_quadrado) / 3 - (sqrt(3)-1)*r_quadrado;
        area2 = 2*((2*((pi_r_quadrado / 4) - (r_quadrado / 2)))- area1)  ; // calcula area do setor circular e remove area do triangulo, o que resulta na area do arco. Essa area * 2 devolve a area de uma interseccao entre dois circulos. Entao remove a area1 dessa interseccao, o que resulta na area de duas partes da area 2. Multiplicando por 2, temos o total da area2
        area3 = r_quadrado - area1 - area2;
        printf("%.3lf %.3lf %.3lf\n", area1, area2, area3);
    }

    return 0;
}
