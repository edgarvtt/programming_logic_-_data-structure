#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

bool eh_primo(int numero) {
    if (numero <= 1) return false;
    if (numero == 2) return true;
    if (numero % 2 == 0) return false;
    for (int i = 3; i <= sqrt(numero); i += 2) {
        if (numero % i == 0) return false;
    }
    return true;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int result;

    if (eh_primo(a) && eh_primo(b) && eh_primo(c) && eh_primo(d)) {
        result = a * b * c * d;
        printf("%d\n", result);
    } else {
        printf("SEM PRODUTO\n");
    }

    return 0;
}