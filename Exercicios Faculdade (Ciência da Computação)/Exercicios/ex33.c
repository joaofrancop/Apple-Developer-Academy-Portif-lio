/*Em uma loja de eletrodomésticos, as compras têm um preço à vista, ou acréscimo de 10 % para
pagamentos em 2 vezes, ou ainda, acréscimo de 20% para pagamento em 3 vezes. O algoritmo
deve pedir para o usuário digitar o valor da compra à vista e a opção de compra. O algoritmo deve
exibir qual o valor final a ser pago.
*/

#include <stdio.h>

int main(void) {

  float valor, resultado;
  int vezes;
  
  printf("Insira o valor da compra e em quantas vezes deseja parcelar (1 a 3): ");
  scanf("%f %d", &valor, &vezes);

  switch(vezes){
    case 1: printf("O valor final a ser pago é: %.2f", valor); break;
    case 2: resultado = valor + (valor * 0.1);
    printf("O valor final a ser pago é: %.2f", resultado); break;
    case 3: resultado = valor + (valor * 0.2);
    printf("O valor final a ser pago é: %.2f", resultado); break;
    default: printf("Inválido");
  }
  return 0;
}