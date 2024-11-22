#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    float salario, bonus;
    scanf("%f", &salario);

    bonus = salario * 0.75;

    if (bonus < 2000) {
        printf("ARGENTINA");
    } else if (bonus >= 2000 && bonus <= 3000) {
        printf("ESPANHA");
    } else {
        printf("ALEMANHA");
    }

    return 0;
}