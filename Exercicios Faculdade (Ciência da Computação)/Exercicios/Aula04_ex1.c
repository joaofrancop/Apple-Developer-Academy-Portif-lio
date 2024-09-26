/*Crie 3 variáveis e associe um valor a cada uma delas. Crie 1 ponteiro e mostre o conteúdo das 3 variáveis através deste único ponteiro;*/

#include <stdio.h>

int main(){

    int a = 1, b = 2, c = 3;
    int *ponteiro;

    ponteiro = &a;

    printf("\nValor de a = %d", *ponteiro);

    ponteiro = &b;

    printf("\nValor de b = %d", *ponteiro);

    ponteiro = &c;

    printf("\nValor de c = %d", *ponteiro);

    return 0;

}