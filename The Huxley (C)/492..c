#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int total_capsulas = 0, professores = 7;
    
    for (int i = 0; i < professores; i++) {
        int quantidade;
        char tipo_caixa;
        scanf("%d %c", &quantidade, &tipo_caixa);
        
        if (tipo_caixa == 'P' || tipo_caixa == 'p') {
            total_capsulas += quantidade * 10;
        } else if (tipo_caixa == 'G' || tipo_caixa == 'g') {
            total_capsulas += quantidade * 16;
        }
    }
    
    int total_xicaras = total_capsulas * 2;
    printf("%d\n", total_capsulas);
    printf("%d\n", total_xicaras / professores);

    return 0;
}