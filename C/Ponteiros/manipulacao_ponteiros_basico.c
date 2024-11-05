/*
Exercício: Manipulação de Ponteiros
Objetivo: Aprender a utilizar ponteiros para manipular valores de variáveis.

Descrição:

Escreva um programa em C que faça o seguinte:

* Declare duas variáveis inteiras a e b.
* Solicite ao usuário para inserir os valores de a e b.
* Declare ponteiros para a e b.
*Usando os ponteiros, troque os valores de a e b.
Exiba os valores de a e b antes e depois da troca.

by: chatgpt
code: @edgarvtt

*/



#include <stdio.h>


int main(){
    
    int a,b;
    printf("digite o valor de A: ");
    scanf("%d",&a);
    puts("");
    printf("digite o valor de B: ");
    scanf("%d",&b);
    
    printf("valores antes da mudança A %d B %d \n",a,b);

    
    int *pontA , *pontB; //declarei ponteiros
    pontA = &a; // apontando para o endereço de memoria A
    pontB = &b; // apontando para o endereço de memoria B
    
    
    // para trocas os valores usa o valor do endereço de memoria (usando *)
    
    *pontA = b;
    *pontB = a;
    
    printf("valores mudados A %d B %d",a,b);
    
    
    return 0;
}