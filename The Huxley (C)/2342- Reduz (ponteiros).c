/*

Crie um programa que tenha apenas uma função, além da principal, 
que receberá como parâmetros dois endereços de variáveis reais x e y e
que deverá reduzir o valor da variável apontada por x de acordo com o valor da variável 
apontada por y. O programa deverá exibir o valor das variáveis antes e depois da redução, 
como no exemplo de saída. Observações: 
(a) exibir os valores com duas casas pós-vírgula; (b) usar obrigatoriamente ponteiros na função.

by: The Huxley
code: @edgarvtt


*/



#include <stdio.h>

int funcaoPonteiro(double x , double y){
    
    double *ponteiroX,*ponteiroY;
    ponteiroX = &x;
    ponteiroY = &y;
    
    *ponteiroX = *ponteiroX + ( *ponteiroY * -1);
    
    printf("%.2lf ",*ponteiroX);
    printf("%.2lf",*ponteiroY);
    
    
}

int main(){
    
    double x,y;
    scanf("%lf",&x);
    scanf("%lf",&y);
    
    funcaoPonteiro(x,y);
    
    return 0;
}