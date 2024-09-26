/*Escreva uma função que recebe dois ponteiros para inteiros como parâmetros. A função deve trocar os valores apontados pelos ponteiros usando aritmética de ponteiros.*/

#include <stdio.h>

void troca(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){

    int x = 10, y = 5;

    printf("\nAntes X = %d // Y = %d", x, y);

    troca(&x, &y);

    printf("\nDepois X = %d // Y = %d", x, y);

    return 0;

}