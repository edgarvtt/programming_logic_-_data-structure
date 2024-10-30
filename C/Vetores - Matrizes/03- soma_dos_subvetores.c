/*

Desafio: Soma dos Subvetores

Objetivo:

Dado um vetor de inteiros, o objetivo é verificar todos os subvetores possíveis do vetor 
e encontrar o número de subvetores cuja soma é igual a um valor específico fornecido pelo usuário.

Instruções:

* Peça ao usuário para inserir o tamanho do vetor.
*Solicite os elementos do vetor.
*Peça ao usuário um valor de soma alvo.
*Use loops para verificar todos os subvetores possíveis do vetor.
*Conte e imprima quantos subvetores têm uma soma igual ao valor alvo.

Exemplo
Entrada:

Tamanho do vetor: 5
Elementos do vetor: 1, 2, 3, 4, 5
Soma alvo: 5
Saída:

Número de subvetores com soma igual a 5: 4
(subvetores: [2, 3] , [3,2] , [1,4] e [4,1]);

considerando os pares Ordenados A,B

by: chatgpt
respondido: @edgarvtt

*/

#include <stdio.h>

int main(){
    
    
    int size;
    printf("digite o tamanho do vetor: ");
    scanf("%d",&size);
    
    int i,vetor[size];
    
    printf("digite os %d itens do vetores:\n",size);
    for(i = 0 ; i < size ; i++){
        
        scanf("%d",&vetor[i]);
        
    }
    
    printf("digite o numero da soma para achar os subvetores: ");
    int somasub;
    int count;
    int verficador = 0;
    scanf("%d",&somasub);
    
    while(verficador != size){
        
    for(i = 0 ; i < size; i++){
        
        if(vetor[i] + vetor[verficador] == somasub){
            count++;}
        
    }   
    verficador++;}
    
    printf("%d itens encontrados",count);
    
    
    return 0;
}