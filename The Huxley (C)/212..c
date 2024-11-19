#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//8.1 6.1 6.7 5.6 7.3


void adicionarNotas(double nota[5]){
    
    for(int i = 0 ; i < 5 ; i++){
        
        scanf("%lf",&nota[i]);
        
    }
    
}

void ordernar(double nota[5]){
    
    double aux = 0;
    
    for(int i = 0 ; i < 4 ; i++){ //pecorrer array
        
        for(int j = 0 ; i < 4 - i; i++){
            
            if(nota[j] > nota[j+1]){
                
                aux = nota[j];
                nota[j] = nota[j + 1];
                nota [j + 1] = aux;

            }
            
        } // pecorrer elementos (bubble short)
        
    }   
 
 
}


void printar(double nota[5]){
    
    for(int i = 0; i < 5 ; i++){
        
        printf("%lf\n",nota[i]);
        
    }
    
}

void calcularNotas(double nota[5],double resultado){
    
    for(int i = 0 ; i < 5 ; i++){
        
        if(nota[i] == nota[0] || nota[i] == nota[4]){
            
            resultado = resultado;

            }else{
            resultado = resultado + nota[i];
        }
        
    }
    
    printf("%.2lf",resultado);


}


int main() {
    
    double nota[5];
    double resultado = 0;
    
    adicionarNotas(nota);
    ordernar(nota);
    printar(nota);
    calcularNotas(nota,resultado);
  

  
    return 0;
    
}