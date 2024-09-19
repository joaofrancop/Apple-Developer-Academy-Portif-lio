/*1. (Beecrowd | 1038) Com base na tabela abaixo, escreva um
programa que leia o código de um item e a quantidade deste item. A seguir,
calcule e mostre o valor da conta a pagar

1 Cachorro-quente R$ 12,00
2 X-Salada R$ 15,50
3 X-Bacon R$ 18,00
4 Torrada simples R$ 8,00
5 Refrigerante R$ 4,50
*/

#include <stdio.h>

int main(){

  int codigo, qtd;
  float valor;

  printf("Digite o codigo do item: ");
  scanf("%i", &codigo);

  printf("Digite a quantidade do item: ");
  scanf("%i", &qtd);

  switch (codigo){
    case 1:valor = qtd * 12.00;
      printf("Total: R$ %.2f", valor); break;
    case 2: valor = qtd * 15.50;
      printf("Total: R$ %.2f", valor); break;
    case 3: valor = qtd * 18.00; 
      printf("Total: R$ %.2f", valor); break;
    case 4: valor = qtd * 8.00; 
      printf("Total: R$ %.2f", valor); break;
    case 5: valor = qtd * 4.50;
      printf("Total: R$ %.2f", valor); break;
    default: printf ("codigo invalido");
  }
  return 0;
}