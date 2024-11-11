#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main(){
    
	float a,b,c,delta,x, x1,x2;
	scanf("%f %f %f",&a,&b,&c);
	
		delta= pow(b,2) - 4*a*c;
		x=pow(delta,0.5);
	
	if(a!=0){
		if(delta<0){
			printf("NRR");
		}
		else{
			x1= (-b + x)/(2.0*a); 
			x2= (-b - x)/(2.0*a);	
			printf("%.2f\n%.2f",x1,x2);
	  }
  }
	else 
		printf("NEESG");

    return 0;
}

