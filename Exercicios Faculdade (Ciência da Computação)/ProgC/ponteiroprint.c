#include <stdio.h>

void main(){

    int variavel = 10;
    int *ponteiro = &variavel;
    int **ponteiroDePonteiro = &ponteiro;


    printf("Var Valor = %d\n", variavel);
    printf("Var End = %d\n\n", &variavel);

    printf("Pont Valor = %d\n", ponteiro);
    printf("Pont End = %d\n", &ponteiro);
    printf("Pont Apontado = %d\n\n", *ponteiro);

    **ponteiroDePonteiro = 20;

    printf("Var Valor = %d\n", variavel);
    printf("PontPont Valor = %d\n", ponteiroDePonteiro);
    printf("PontPont End = %d\n", &ponteiroDePonteiro);
    printf("PontPont Apontado = %d\n", *ponteiroDePonteiro);
    printf("PontPont Apontado2 = %d\n\n", **ponteiroDePonteiro);

    ponteiroDePonteiro++;
    
    printf("PontPont Valor = %d\n", ponteiroDePonteiro);
    printf("PontPont End = %d\n", &ponteiroDePonteiro);    
}