#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int mdc(int A, int D) {
    if (A > D) {
        int resto = A % D;
        if (resto == 0) {
            return D;
        }
        return mdc(D, resto);
    } else {
        int resto = D % A;
        if (resto == 0) {
            return A;
        }
        return mdc(A, resto);
    }
}

void calcular(unsigned int N) {
    unsigned int X, Y;
    
    if (N != 0) {
        scanf("%i %i", &X, &Y);
        printf("MDC(%i,%i) = %i\n", X, Y, mdc(X, Y));
        calcular(N - 1);
    }
}

int main() {
    int C;
    scanf("%d", &C);
    calcular(C);
    return 0;
}