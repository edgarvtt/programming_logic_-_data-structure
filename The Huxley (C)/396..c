#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int veic = 0;
    float valorMulta = 0.0;
    int contador = 0;
    const float multaPorVeiculo = 12.89;

    while (1) {
        scanf("%d", &veic);

        if (veic == 999) {
            break;
        }

        if (veic > 2) {
            int veiculosDescontados = veic - 2;
            valorMulta += veiculosDescontados * multaPorVeiculo;
            contador++;
        }
    }

    printf("%.2f\n", valorMulta);
    printf("%d\n", contador);

    return 0;
}
