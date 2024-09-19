/*4 - Analise o código abaixo e determine o valor das variáveis ao final da execução.
int i = 34, j; 
int *p;
p = &i;
*P++;
j = *p + 33;
*/
#include <stdio.h>
void main(){
int i = 34, j; 
int *p;
p = &i;
*p++;
j = *p + 33;

printf("i = %d\n", i);
printf("p = %d\n", p);
printf("*p = %d\n", *p);
printf("j = %d\n", j);
}

