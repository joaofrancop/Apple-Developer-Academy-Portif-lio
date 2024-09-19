/*5- Analise o código abaixo e determine o valor das variáveis ao final da execução.
int i=7, j=5;
int *p;
int **q;
p = &i;
q = &p;
c = **q + j;*/

#include <stdio.h>

void main(){
    int i=7, j=5, c;
    int *p;
    int **q;
    p = &i;
    q = &p;
    c = **q + j;

    printf("p = %d - endereco de i = %d\n", p, &i);
    printf("q = %d - endereco de p = %d\n", q, &p);
    printf("c = %d - 12\n", c);
}