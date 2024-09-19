/* Você está endividado e quer administrar melhor sua vida financeira. Para
isso, faça um programa que recebe o valor de uma dívida e o juro mensal, então calcule e
imprima o valor da dívida no mês seguinte*/

#include <stdio.h>

int main()  {

float valordadivida, jurosmensal, valor;

  printf("insira o valor da divida:\n ");
  scanf("%f", &valordadivida);

  printf("o valor do juro mensal:\n ");
  scanf("%f", &jurosmensal);

  valor = valordadivida + (valordadivida * jurosmensal/100);

  printf("o valor da divida no mes seguinte é %.2f\n", valor);

  return 0;
}