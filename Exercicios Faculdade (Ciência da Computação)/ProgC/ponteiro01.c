#include <stdio.h>

void main(){
    
    int variavel = 200;
    int *ponteiro;

    ponteiro = &variavel;

    printf("ponteiro = %d\n", ponteiro); //printa a posição da variavel onde o ponteiro apontou
    printf("&variavel = %d\n", &variavel); //printa a posição da variavel
    printf("&ponteiro = %d\n", &ponteiro); //printa a posição do ponteiro
    printf("*ponteiro = %d\n", *ponteiro); //printa o valor da variavel que o ponteiro apontou

}