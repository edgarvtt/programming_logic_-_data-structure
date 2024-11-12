#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
    
    double malaL;
    double malaC;
    double malaA;
    
    scanf("%lf",&malaL);
    scanf("%lf",&malaC);
    scanf("%lf",&malaA);
    
    if(malaL <= 45 && malaC <= 56 && malaA <= 25){
        
        printf("PERMITIDA");
        
    } else{
        printf("PROIBIDA");
    }
    
    
    
    return 0;
}