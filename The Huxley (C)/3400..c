#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double areaE, areaI;
    scanf("%lf %lf",&areaE,&areaI);
    
    double result;
    
    result = 3.14 * (pow(areaI,2) - pow(areaE,2));
    printf("%.2lf",result);
    
    
	return 0;
}