/*Crie um programa que contenha uma função que permita passar por parâmetro dois números inteiros A e B. A função devera calcular a soma entre estes dois números e armazenar o resultado na variável A. Esta função não devera possuir retorno, mas devera modificar o valor do primeiro parâmetro. Imprima os valores de A e B na função principal.*/

#include <stdio.h>

void func(int *a, int *b){
    
    *a = *a + *b;

}

int main(){

    int a = 5, b = 3;

    printf("Antes\n");
    printf("Valor de a = %d\nValor de b = %d\n", a, b);

    func(&a, &b);

    printf("Depois\n");
    printf("Valor de a = %d\nValor de b = %d\n", a, b);

    return 0;
}