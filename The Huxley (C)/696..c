#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int vetor[10];
    int x,i;
    int count = 0;
    
    for(i = 0 ; i < 10 ; i++){
        
        int y;
        scanf("%d",&y);
        vetor[i] = y;
        
    }  
    
    scanf("%d",&x);
    
    for(i = 0 ; i < 10 ; i++){

        if(vetor[i] == x){
            count++;
        }
        
    }
    
    printf("%d",count);
    
    
    
    
	return 0;
}