/*7. Faça um programa que leia dois números reais, um será o valor de um
produto e outro o valor de desconto que esse produto está recebendo. Imprima quantos
reais o produto custa na promoção.*/

#include <stdio.h>

int main()  {

float produto, desconto, promocao;

  printf("insira o valor do produto:\n ");
  scanf("%f", &produto);

  printf("insira a porcentagem de desconto:\n ");
  scanf("%f", &desconto);

  promocao = produto - (produto * desconto / 100);

  printf("o valor do produto na promocao é %.2f\n", promocao);


  return 0;
}