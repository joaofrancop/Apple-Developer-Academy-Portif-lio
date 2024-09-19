/*17. Escreva uma função CALCULA que:
    1. Receba como parâmetros duas variáveis inteiras, X e Y;
    2. Retorne em X a soma de X e Y;
    3. Retorne em Y a subtração de X e Y;*/

#include <stdio.h>

 void func(int *X, int *Y){

    int temp = *X;

    *X = *X + *Y;

    *Y = temp - *Y;

 }   


int main(){

    int X = 5, Y = 3;

    printf("Antes\n");
    printf("Valor de X = %d\nValor de Y = %d\n", X, Y);

    func(&X, &Y);

    printf("Depois\n");
    printf("Valor de X = %d\nValor de Y = %d\n", X, Y);

    return 0;
}