#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int Interf, IA , Encap , Inde , Structs;
    
    scanf("%d %d %d %d %d",&Interf,&IA,&Encap,&Inde,&Structs);
     
    if((Interf || IA) && (Encap && Inde) && Structs)
        printf("AVALIADO");
    else
        printf("0");
    
	return 0;
}