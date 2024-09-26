#include <stdio.h>
#include <stdlib.h>

int main(){

    int *ponteiro = NULL, i, valor;

    printf("Insira o valor a ser alocado: ");
    scanf("%d", &valor);

    //printf("Pont = %d\n", ponteiro);
    ponteiro = malloc( sizeof(int) * valor );
    //ponteiro = calloc( valor , sizeof(int));

    if (ponteiro != NULL){
        
        printf("Pont = %d\n", ponteiro);
    
    for ( i = 0; i < valor; i++){
         //Não altera o valor original do ponteiro
        *(ponteiro+i) = i; 
        printf("Valor = %d\n", *(ponteiro+i));
    }

    printf("Insira o valor a ser alocado: ");
    scanf("%d", &valor);
    
    ponteiro = realloc(ponteiro, valor * sizeof(int));


    printf("Pont = %d\n", ponteiro);

    for ( i = 0; i < valor; i++){
         //Não altera o valor original do ponteiro
        //*(ponteiro+i) = i; 
        printf("Valor = %d\n", *(ponteiro+i));
    }    

    free(ponteiro);

    } else {
        printf("Alocação falhou");
    }
    
    return 0; 
}