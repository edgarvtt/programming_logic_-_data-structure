#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define pi  3.14159

int main() {
    double raio_cm, area_cm, area_m2;

    scanf("%lf", &raio_cm);

    area_cm = pi * (raio_cm * raio_cm) ;

    area_m2 = area_cm / 10000.0; 

    printf("Area = %.4lf\n", area_m2);

    return 0;
}
