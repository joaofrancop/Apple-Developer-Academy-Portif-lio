#include <stdio.h>

void troca(int *valor1, int *valor2){
    int temp;

    temp = *valor1;
    *valor1 = *valor2;
    *valor2 = temp;
}

void main(){

    int num1 = 5, num2 = 7, temp;

    printf("Num1 = %d, Num2 = %d\n", num1, num2);
    
    troca(&num1, &num2);

    printf("Num1 = %d, Num2 = %d\n", num1, num2);

}