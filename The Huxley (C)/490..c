#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double valorArvore, valorTotal;
    double QuantidadeEnfeite[3], PrecoEnfeite[3], E[3];
    int i;

    scanf("%lf", &valorArvore);

    for (i = 0; i < 3; i++) {
        scanf("%lf", &QuantidadeEnfeite[i]);
        scanf("%lf", &PrecoEnfeite[i]);
        E[i] = QuantidadeEnfeite[i] * PrecoEnfeite[i];
    }

    valorTotal = valorArvore;
    for (i = 0; i < 3; i++) {
        valorTotal += E[i];
    }

    printf("%.2lf\n", valorTotal);
    printf("%.2lf", valorTotal / 21);

    return 0;
}