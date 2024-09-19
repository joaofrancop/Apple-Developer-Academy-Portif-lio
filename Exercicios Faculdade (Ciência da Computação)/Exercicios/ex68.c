/*Crie um algoritmo que leia os limites inferior e superior de um intervalo e imprima todos os números pares no intervalo aberto e seu somatório. Suponha que os números digitados são um intervalo crescente.
Exemplo:
● Limite inferior: 3
● Limite superior: 12
● Saída: 4 6 8 10
● Soma: 28
*/

#include <stdio.h>

int main(void){

  int limite_inf, limite_sup, soma = 0, i = 0;

  printf("Insira o limite inferior: ");
  scanf("%d", &limite_inf);

  printf("Insira o limite superior: ");
  scanf("%d", &limite_sup);

  for(i = limite_inf; i < limite_sup; i++){
    if(i % 2 == 0){
      soma += i;
      printf("%d ", i);
    }
  }

  printf("\nSoma: %d", soma);
  
  return 0;
}