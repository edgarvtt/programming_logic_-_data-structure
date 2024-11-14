#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    float valor,conta;
    
    scanf("%f",&valor);
    
    conta = (valor * 0.1) + valor;
    
    printf("%.2f",conta);
    
	return 0;
}