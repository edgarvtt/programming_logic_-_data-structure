#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int a,b,c;
    
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    if(a== b && a == c && b == c)
        printf("equilatero");
    else if(a!= b && a != c && b != c)
        printf("escaleno");
    else 
        printf("isosceles");
    
	return 0;
}