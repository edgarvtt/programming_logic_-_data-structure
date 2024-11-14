#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int sequencia = 0;
    scanf("%d",&sequencia);
    
        int a = 0;
        int b = 1;
        int c;
        
        c = a + b;
        

        
        if(sequencia >= 1 && sequencia < 2){
            printf("%d\n",a);}
        
        if(sequencia >= 2 && sequencia < 3){
             printf("%d\n",a);
            printf("%d\n",b);
        }

        
        if(sequencia >= 3){
             printf("%d\n",a);
            printf("%d\n",b);
            printf("%d\n",c); }
            
    
        
        
    
    for(int i = 0 ; i < sequencia - 3; i++){
        
        a = b; //1 // 1 // 2
        b = c; // 1 // 2 // 3
        c = a + b; // 2 // 3 // 5

        printf("%d\n",c);
        
    }
    
	return 0;
}