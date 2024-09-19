/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.*/

#include <stdio.h>

int main(){

    int inteiro = 1;
    float real = 1.5;
    char caracter = 'a';

    int *p_int;
    float *p_float;
    char *p_char;

    p_int = &inteiro;
    p_float = &real;
    p_char = &caracter;

    printf("\nValor inteiro = %d", inteiro);
    printf("\nValor real = %.2f", real);
    printf("\nValor caracter = %c", caracter);

    *p_int = 2;
    *p_float = 2.5;
    *p_char = 'b';

    printf("\n\n\n");

    printf("\nValor inteiro = %d", inteiro);
    printf("\nValor real = %.2f", real);
    printf("\nValor caracter = %c", caracter);

return 0;

}