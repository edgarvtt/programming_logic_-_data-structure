#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int x,i;
    scanf("%d",&x);
    int vetor[x];
    

    for(i = 0 ; i < x ; i++){
        
        int y;
        scanf("%d",&y);
        vetor[i] = y;
    }
    
    
    for(i = 0 ; i < x ; i++){
        
        printf("%d ",vetor[(x-1)-i]);
        
    }
    
	return 0;
}