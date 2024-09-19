/* 5. Desenvolva um algoritmo para aplicar um percentual de desconto sobre o valor
de uma compra informado pelo usuário. Os percentuais de desconto são:
● 15% para compras acima de R$ 500,00;
● 10% para compras entre R$ 200,00 e R$ 499,99;
● 5% para compras abaixo de R$ 200,00.
O algoritmo deverá exibir o valor antes do desconto, o valor do desconto e o valor a ser
pago. */

#include <stdio.h>

int main(void) {

  float valor, desconto, resultado;

  printf("Insira o valor da conta: ");
  scanf("%f", &valor);

  if (valor >= 500.00) {

    desconto = valor * 0.15;
    resultado = valor - desconto;  
    printf("O valor da conta é: %.2f\n o valor do desconto é %.2f\n o valor a ser pago é %.2f", valor, desconto, resultado);
  } else if (valor >= 200.00 && valor < 499.99) {

    desconto = valor * 0.10;
    resultado = valor - desconto;
    printf("O valor da conta é: %.2f\n o valor do desconto é %.2f\n o valor a ser pago é %.2f", valor, desconto, resultado);
  } else if (valor >= 0.00 && valor < 199.99) {
    
    desconto = valor * 0.05;
    resultado = valor - desconto;
    printf("O valor da conta é: %.2f\n o valor do desconto é %.2f\n o valor a ser pago é %.2f", valor, desconto, resultado);
    
  }
  return 0;
}