#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int ph;
    
    printf("Digite o pH da solucao:\n");
    scanf("%d",&ph);
    
    
    if(ph < 7 && ph > 0)
        printf("Essa solucao e acida.");
    else if(ph > 7 && ph < 14)
        printf("Essa solucao e basica.");
    else if(ph == 7)
        printf("Essa solucao e neutra.");
    else
        printf("Valor deve estar entre 0 e 14.");
        
    
	return 0;
}