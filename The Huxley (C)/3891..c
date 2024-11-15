#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    float nota1, nota2, nota3;
    float media, media2, media3;
    scanf("%f",&nota1);
    scanf("%f",&nota2);
    scanf("%f",&nota3);
    
    media = (nota1 + nota2 + nota3) / 3;
    media2 = (nota1 * 2 + nota2 * 2 + nota3 * 3) / 7;
    media3 = (nota1 + nota2 * 2 + nota3 * 2) / 5;
    
    printf("%.2f\n",media);
    printf("%.2f\n",media2);
    printf("%.2f\n",media3);

    
	return 0;
}