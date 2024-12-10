#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x;

    while (scanf("%d", &x) && x != 0) {

        int n = (x - 1) / 2;
        
        int calcA = (n + 1) * (n + 1); 
        int calcB = n * n; 
        
        printf("%d - %d\n", calcA, calcB);
    }

    return 0;
}