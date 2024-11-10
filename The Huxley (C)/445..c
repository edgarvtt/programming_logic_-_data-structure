#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int dias , km , km_incluso;
    float valor_total;
    
    scanf("%d",&dias);
    scanf("%d",&km);
    
    valor_total = dias * 90;
    km_incluso = dias * 100;

    
     if(km > km_incluso){
        
        valor_total += (km - km_incluso) * 12;
    }
    
    printf("%.2f",valor_total);
    
    
	return 0;
}