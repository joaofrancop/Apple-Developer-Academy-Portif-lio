/*Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.*/

#include <stdio.h>

int main(){

    int var1, var2;
    int *p1, *p2;

    printf("\nInsira um valor para var1 e para var 2: \n");
    scanf("%d %d", &var1, &var2);

    p1 = &var1;
    p2 = &var2;

    printf("\nendereço var1 = %p", (void*)&p1);
    printf("\nendereço var2 = %p", (void*)&p2);

    if( *p1 > *p2){
        printf("\nvar1 maior");
    } else {
        printf("\nvar2 maior");
    }

    return 0;
}