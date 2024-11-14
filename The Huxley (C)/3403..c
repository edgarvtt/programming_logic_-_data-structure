#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    
    int x1,y1,z1;
    int x2,y2,z2;
    
    scanf("%d %d %d",&x1,&y1,&z1);
    scanf("%d %d %d",&x2,&y2,&z2);
    
    double result1,result2,result3,result4,result;
    
    result1 = pow((x1 - x2),2);
    result2 = pow((y1 - y2),2);
    result3 = pow((z1 - z2),2);
    result4 = result1 + result2 + result3;
    result  = sqrt(result4);
    
    printf("%.2lf",result);
    
    
	return 0;
}