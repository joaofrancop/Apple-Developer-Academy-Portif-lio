/*6. Crie um algoritmo para calcular a taxa de serviço do garçom, a partir da
entrada do valor da conta. A taxa de serviço é fixa em 10%. O sistema deverá escrever na
tela o valor da taxa de serviço e depois o valor total a ser pago*/

#include <stdio.h>

int main() {

float conta, servico, total;

  printf("insira o valor da conta:\n");
  scanf("%f", &conta);

  servico = conta * 0.1;
  total = conta + servico;

  printf("o valor do servico é %.2f e o valor total a ser pago é %.2f\n", servico, total);


  return 0;
}