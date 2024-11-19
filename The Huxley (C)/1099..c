#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double base_menor,base_maior,altura;
    double calc;
    
    scanf("%lf",&base_menor);
    scanf("%lf",&base_maior);
    scanf("%lf",&altura);
    
    calc = ((base_maior + base_menor) * altura) /2;
    
    printf("%.1lf",calc);
    
    
	return 0;
}