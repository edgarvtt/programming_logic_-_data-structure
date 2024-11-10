#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    
    
    int i;
    double a;
    int count = 0;
    
    for(i = 0 ; i < 5 ; i++){
        
        printf("Digite um valor:\n");
        scanf("%lf",&a);
        
        if( a < 0)
        {
            count++;
        }
    }
    
    printf("Foram digitados %d numeros negativos",count);
    
    return 0;
} 
