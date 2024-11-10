#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    float a,b,c,media;
    
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    
    media = (a+b+c) /3;

    if(a > media && b > media && c > media){
        printf("3");
    } else if (b > media && c > media){
        printf("2");
    }
     else if (a > media && c > media){
            printf("2");
     }
      else if (a > media && b > media){
            printf("2");
     } else if (a > media && b < media && c < media){
            printf("1");
     } else if (b > media && a < media && c < media){
            printf("1");
     } else if (c > media && a < media && b < media){
            printf("1");
     } else {
            printf("0");
     }
     

	return 0;
}