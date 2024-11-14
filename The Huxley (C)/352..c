#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void mdc(int a, int b) {
    if (a > b) {
        if (a % b == 0) {
            printf("%d", b);
            return;
        }
        mdc(b, a % b);
    } else {
        if (b % a == 0) {
            printf("%d", a);
            return;
        }
        mdc(a, b % a);
    }
}

int main() {
    int n1, n2;
    
    scanf("%d%d", &n1, &n2);
    
    mdc(n1, n2);
    
    return 0;
}
