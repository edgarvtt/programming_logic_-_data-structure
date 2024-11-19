#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void verificar(int altura, int idade){
    
    int count = 0;
    
    if(altura >= 150 && idade >= 12 ){
        count++; //barka vinking
    }
    
    if(altura >= 140 && idade >= 14){
        count++;
    }
    
    if(altura >= 170 || idade >= 16){
        count++;
        
    }
    
    printf("%d",count);
    
}

int main() {
    
    int altura,idade;
    scanf("%d",&altura);
    scanf("%d",&idade);

    verificar(altura,idade);
    
    
	return 0;
}