#include <stdio.h>

//Desafio: Média de Números e Contagem de Números Acima da Média
//Escreva um programa em C que faça o seguinte:

//Peça ao usuário para inserir o tamanho de um vetor (o tamanho máximo do vetor será 100).
//Em seguida, peça ao usuário para preencher o vetor com números inteiros.
//Calcule a média dos números no vetor.
//Conte quantos números do vetor são maiores que a média calculada.
// Imprima a média e a quantidade de números maiores que a média.


int main(){
    
    int x,maior;
    double result = 0 , cont = 0;
    printf("digite o numero de contagem: \n");
    scanf("%d",&x);
    
    while(x > 100){
    
        printf("o tamanho deve ser de no máximo 100 elementos \n");
        printf("digite o numero de contagem novamente: \n");
        scanf("%d",&x);

    }
    
    int number[x];
        
    printf("digite os %d digitos da contagem:\n",x);
    
    for(int i = 0 ; i < x ; i++){
        int y;
        scanf("%d",&y);
        number[i] = y;
    } 
    
    for(int g = 0 ; g < x ; g++){
        
        cont += number[g];
    } 
    
    result = cont / x;
    
    for(int w = 0 ; w < x ; w++){
        
        if(number[w] > result){
            maior++;
        }
        
    } 
    
    printf("a media dos numeros é: %.2lf \n",result);
    printf("esse é o total de numeros maiores: %d", maior);
        
    
    return 0;
    
}