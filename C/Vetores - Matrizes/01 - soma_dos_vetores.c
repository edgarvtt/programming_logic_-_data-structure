#include <stdio.h>



int main(){
    
    int size;
    printf("digite o tamanho dos vetores: ");
    scanf("%d",&size);
    
    int vetor1[size];
    int vetor2[size];

    printf("digite os valores do vetor 1:\n");
    for(int i = 0; i < size ; i++){
        
         scanf("%d",&vetor1[i]);
    }
    
    printf("digite os valores do vetor 2:\n");
       for(int i = 0; i < size ; i++){
        
         scanf("%d",&vetor2[i]);
    }

    printf("a soma dos vetores: ");
    for(int i = 0 ; i < size ; i++){
        printf("%d ",vetor1[i] + vetor2[i]);
    }
    
    
    
    return 0;
}