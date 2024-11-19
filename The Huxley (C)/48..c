#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int number;
    scanf("%d", &number);

    int count = 0;

    if (number % 10 != 0) {
        count++;
    }

    int aux = number / 10;

    if (number % aux == 0) {
        count++;
    }

    if (number < 10 || number > 100) {
        count = 0;
    }

    if (count == 2) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }

    return 0;
}
