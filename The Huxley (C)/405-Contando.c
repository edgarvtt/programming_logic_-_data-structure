#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int pares(int x) {
    int last;

    if (x <= 0) {
        return 0;
    } else {
        last = x % 10;

        if (last % 2 == 0) {
            return 1 + pares(x / 10);
        } else {
            return pares(x / 10);
        }
    }
}

int main() {
    int x;

    scanf("%d", &x);

    printf("%d\n", pares(x));

    return 0;
}