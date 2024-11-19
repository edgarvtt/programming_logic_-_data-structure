#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int number, calc;
    
    scanf("%d",&number);
    calc = number % 10;
    calc *= + 1;
        
    printf("%d",calc);
    
    
	return 0;
}