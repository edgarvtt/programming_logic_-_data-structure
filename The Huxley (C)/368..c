#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double salario,calc;
    
    scanf("%lf",&salario);
    
    calc = 0;
    
    if(salario > 500){
        calc = (salario * 0.10) + salario;
    } else if (salario > 300){
        calc = (salario * 0.07) + salario;
    } else{
        calc = (salario * 0.05 ) + salario;
    }
    
    printf("%.2lf",calc);
    
    
	return 0;
}