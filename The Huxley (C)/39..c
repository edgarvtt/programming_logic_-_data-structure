#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double notaA,notaB,notaC;
    scanf("%lf %lf %lf",&notaA,&notaB,&notaC);
    double media;
    
    media = (notaA + notaB + notaC) / 3;
    
    if(media >= 7){
        printf("aprovado");
    } else if (media < 3){
        printf("reprovado");
    } else{
        printf("prova final");
    }
    
	return 0;
}