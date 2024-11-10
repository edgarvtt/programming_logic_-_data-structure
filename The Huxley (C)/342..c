#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int total = 0;

int divisores(int x , int i){
    
     if (i == 0) {
        if (total > 0) {
            return printf("%d\n", total);
        } 
        else {
            return printf("O numero nao possui divisores multiplos de 3!");
        }
    } 
    
    if (x % i == 0 && i % 3 == 0) {
        total++;
    }

    divisores(x, i - 1);
}

int main() {
    
   int x;
   scanf("%d",&x);
    
    divisores(x,x);    
	return 0;
}