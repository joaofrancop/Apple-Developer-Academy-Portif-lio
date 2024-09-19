#include <stdio.h>

void main(){

    int x = 50, y;
    int  *ponteiro;

    ponteiro = &x;
    y = *ponteiro;

    printf("Valor de y = %d", y);

}