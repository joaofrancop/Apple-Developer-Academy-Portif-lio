#include <stdio.h>
#include <stdlib.h>

void main(){

    int **ponteiroMatriz, num, i;

    printf("Digite o valor de colunas: ");
    scanf("%d", &num);

    ponteiroMatriz  = (int**) malloc(num * sizeof(int)); //forçando casting para o retorno do malloc ser int** e não void

for( i = 0; i < num; i++)
{
    ponteiroMatriz[i] = (int*) malloc(num * sizeof(int));
}

for ( i = 0; i < num; i++)
{
    scanf("%d", &ponteiroMatriz[i][i]);
    printf("Valor = %d\n", ponteiroMatriz[i][i]);
}

for ( i = 0; i < num; i++)
{
    free(ponteiroMatriz[i]);
}

free(ponteiroMatriz);

}