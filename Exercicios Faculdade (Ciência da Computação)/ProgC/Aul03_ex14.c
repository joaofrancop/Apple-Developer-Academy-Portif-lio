/*Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2 valores de entrada e retorne o maior valor na primeira variável e o menor valor na segunda variável. Escreva o conteúdo das 2 variáveis na tela.*/

#include <stdio.h>

void funcao (int *a, int *b){

if(*a < *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

}

int main(){

    int a, b;

    printf("Insira dois valores inteiros: ");
    scanf("%d %d", &a, &b);

    funcao(&a, &b);

    printf("Primeira variável (maior) = %d\nSegunda variável (menor)= %d", a, b);

    return 0;
}