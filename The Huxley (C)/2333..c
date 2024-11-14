#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double a,b;
    scanf("%lf",&a);
    scanf("%lf",&b);
    
    char tipo[20];
    scanf("%s",tipo);
    double result = 0;
    
    // a função strcmp veifica se a string tem um valor "x" e retorna "0" se for verdadeiro
    
    if(strcmp(tipo, "soma") == 0){
        
        result = (a + b);

    } 
    
    if (strcmp(tipo, "multiplicacao") == 0){
        
        result = (a * b);

    } 
    
    if (strcmp(tipo, "subtracao") == 0){
        
        result = (a - b);

    } 
    
    if (strcmp(tipo, "divisao") == 0){
        
        result = (a / b);
    }
    
    printf("resultado = %.2lf",result);
    
    
    
	return 0;
}