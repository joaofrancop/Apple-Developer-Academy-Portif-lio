/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.*/

#include <stdio.h>

int main(){

    int inteiro = 1;
    float real = 3.14;
    char caractere = 'A';

    int *p_inteiro;
    float *p_real;
    char *p_caractere;


    p_inteiro = &inteiro;
    p_real = &real;
    p_caractere = &caractere;
    
    printf("inteiro = %d\n", inteiro);
    printf("real = %f\n", real);
    printf("caractere = %c\n", caractere);

    *p_inteiro = 2;
    *p_real = 6.28;
    *p_caractere = 'B';

    printf("inteiro = %d\n", inteiro);
    printf("real = %f\n", real);
    printf("caractere = %c\n", caractere);

    return 0;

}