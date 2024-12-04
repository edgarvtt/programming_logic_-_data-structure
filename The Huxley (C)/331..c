#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


struct dados {
    
    int idade;
    char nome[50];
    char sexo;
    char estadoCivil;
    int quanAmigos;
    int quanFotos;
    
};


int main() {
    
    
    int quantidade;
    scanf("%d",&quantidade);
    
    struct dados cliente[quantidade];
    

    for (int i = 0; i < quantidade; i++) {
        scanf("%d", &cliente[i].idade);
        scanf(" %49[^\n]", cliente[i].nome);
        scanf(" %c", &cliente[i].sexo);  
        scanf(" %c", &cliente[i].estadoCivil);
        scanf("%d", &cliente[i].quanAmigos);
        scanf("%d", &cliente[i].quanFotos);
    }

    for (int i = 0; i < quantidade; i++) {
        printf("Idade: %d\n", cliente[i].idade);
        printf("Nome: %s\n", cliente[i].nome);
        printf("Sexo: %c\n", cliente[i].sexo);
        printf("Estado Civil: %c\n", cliente[i].estadoCivil);
        printf("Numero de amigos: %d\n", cliente[i].quanAmigos);
        printf("Numero de fotos: %d\n", cliente[i].quanFotos);
        puts("");
    }
    
    
    
	return 0;
}