#include <stdio.h>


int main(){
    
    
    int a,b,r;
    scanf("%d",&a);
    scanf("%d",&b);
    
    while(r != 0){
        
        r = a % b;
        a = b;
        b = r; 
        
        if(r == 0){
            printf("o MDC é %d",a);
        }
        
    }
    

    
    return 0;
}