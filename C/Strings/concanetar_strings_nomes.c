// exercicio = faça uma cocactenação de strings


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char nome[] = {'E' , 'd' , 'g' , 'a' , 'r' , ' '};
    char sobrenome[] = {'V' , 'i' , 't' , 'o' , 'r'};

    int sizeNome = sizeof(nome);
    int sizeSobrenome = sizeof(sobrenome);
    
    char nomeCompleto[sizeNome + sizeSobrenome];
    
    for(int i = 0; i < sizeNome ; i++){
        
        nomeCompleto[i] = nome[i];
        
    }
    
    for(int i = 0 ; i < sizeSobrenome ; i++){
        
        nomeCompleto[sizeNome + i] = sobrenome[i];
        
    }
    
    for(int i = 0 ; i < (sizeNome + sizeSobrenome) ; i++ ){
        
        printf("%c",nomeCompleto[i]);
        
    }

	return 0;
}