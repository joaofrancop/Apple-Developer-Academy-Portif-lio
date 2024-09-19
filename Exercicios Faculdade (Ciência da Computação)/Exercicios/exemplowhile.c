#include <stdio.h>

int main(void){

  int num, resultado;
  char decisao = 'S';

  while ((decisao == 'S') || (decisao == 's')){
    printf("Digite um numero: \n");
    scanf("%d", &num);
    resultado = num * 3;
    printf("Resultado: %d\n", resultado);

    printf("Deseja fazer outra operação? (S/N)\n");
    scanf(" %c", &decisao);
    
  }
  return 0;
}