#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ClassificaAluno(double notas, int faltas){
    
    if(faltas > 10){
        printf("REPROVADO POR FALTAS");
    } else if(notas < 7){
        printf("REPROVADO");
    } else if(notas >= 7 && notas < 9.5){
        printf("APROVADO");
    } else if(notas >= 9.5){
        printf("APROVADO COM LOUVOR");
    }
    
    
}

int main() {
    
    double notas;
    int faltas;
    
    scanf("%lf",&notas);
    scanf("%d",&faltas);
    
    ClassificaAluno(notas,faltas);
    
	return 0;
}