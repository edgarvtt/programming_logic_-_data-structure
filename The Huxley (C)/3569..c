#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int angulo1, angulo2;
    float angulo3;
    
    scanf("%d",&angulo1);
    scanf("%d",&angulo2);
    angulo3 = 180 - (angulo1 + angulo2);
    
    printf("3o angulo=%6f", angulo3);
    
    

    
	return 0;
}