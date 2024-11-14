#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int consumo,fixo,limite;
    
    consumo = 0;
    fixo = 7;
    limite = 0;
    
    scanf("%d", &consumo);

    if (consumo > 100) {
        limite = consumo - 100;
        consumo -= limite;
        fixo += (limite * 5);
    }

    if (consumo > 30) {
        limite = consumo - 30;
        consumo -= limite;
        fixo += limite * 2;
    }

    if (consumo > 10) {
        limite = consumo - 10;
        fixo += limite;
    }

    printf("%d\n", fixo);

    return 0;
}