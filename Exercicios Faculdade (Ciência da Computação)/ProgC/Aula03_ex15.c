/*Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça uma função que retorne a soma do dobro dos dois números lidos. A função dever  a armazenar o dobro de A na própria variável A e o dobro de B na própria variável B.*/

#include <stdio.h>

int somadobro(int *a, int *b){

    *a = (*a + *a);
    *b = (*b + *b);

    return *a + *b;
}

int main(){

    int a, b, res;

    printf("Insira dois valores inteiros: ");
    scanf("%d %d", &a, &b);

    res = somadobro(&a, &b);

    printf("Dobro da primeira = %d\nDobro da segunda = %d\nresultado = %d", a, b, res);

    return 0;
}