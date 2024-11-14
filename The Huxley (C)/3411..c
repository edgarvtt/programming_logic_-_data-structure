#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    
    double km;
    scanf("%lf",&km);
    
    char tipoCarro[3];
    scanf("%s",tipoCarro);
    
    double result;
    
    if(strcmp(tipoCarro,"A") == 0){
        
        result = km / 12;
        printf("%.2lf",result);

        
    } else if (strcmp(tipoCarro,"B") == 0){
        
        result = km / 9;
        printf("%.2lf",result);

        
    } else if (strcmp(tipoCarro,"C") == 0){
        
        result = km / 8;
        printf("%.2lf",result);

        
    } else {
        
        printf("Tipo inválido!");
        
    }
    


	return 0;
}
