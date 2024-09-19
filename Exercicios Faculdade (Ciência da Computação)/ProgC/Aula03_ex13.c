/*Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2 variáveis e troque o seu conteúdo, ou seja, esta função e chamada passando duas variáveis A e B por exemplo e, após a execução da função, A conter a o valor de B e B terá o valor de A.*/

#include <stdio.h>

void troca(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    int var1, var2;

    printf("\nInsira os valores para A e B: ");
    scanf("%d %d", &var1, &var2);

    printf("\nAntes da troca A = %d - B = %d", var1, var2);

    troca(&var1, &var2);

    printf("\nDepois da troca A = %d - B = %d", var1, var2);

    return 0;
}