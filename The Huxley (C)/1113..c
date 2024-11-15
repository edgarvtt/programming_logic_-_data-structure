#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    
    int dia,mes,ano;
    
    scanf("%d",&dia);
    scanf("%d",&mes);
    scanf("%d",&ano);
    
    int count = 0;
    
    if(mes > 0 && mes <= 12){
        
        count++;
        
    }
    
    if(ano >= 1900 && ano <= 2100){
        
        count++;
        
    }
    
    if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
        
        if(dia > 0 && dia <= 30){
            count++;
        }
        
    } else if( mes == 2){
        
        //saber se ele é bissexto
        
        if(ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)){
            
            if(dia > 0 && dia <= 29){
            
            count++;
            }
            
        } else {
            
            if(dia>0 && dia <= 28){
            count++;
            }
            
        }
        
        
    } else if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        
        if(dia > 0 && dia <= 31){
            count++;
        }
        
    } 
    
    if(count == 3){
        printf("valida");
    } else{
        printf("invalida");
    }
    
}