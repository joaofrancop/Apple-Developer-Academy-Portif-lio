/* Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.

codigo - especificacao - preço
1 - cachorro quente - 4.00
2 - xsalada - 4.50
3 - xbacon - 5.00
4 - torrada simples - 2.00
5 - refrigerante - 1.50

Entrada
O arquivo de entrada contém dois valores inteiros correspondentes ao código e à quantidade de um item conforme tabela acima.

Saída
O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas após o ponto decimal. */

#include <stdio.h>

int main(void) {

  int codigo, quantidade;
  float total;

  printf("Insira o código do produto:");
  scanf("%d", &codigo);

  printf("Insira a quantidade do produto:");
  scanf("%d", &quantidade);

  if (codigo == 1) {

    total = quantidade * 4.00;
    printf("Total: R$ %.2f", total);
    
  } else if (codigo == 2) {

    total = quantidade * 4.50;
    printf("Total: R$ %.2f", total);
    
  } else if (codigo == 3) {

    total = quantidade * 5.00;
    printf("Total: R$ %.2f", total);
    
  } else if (codigo == 4) {

    total = quantidade * 2.00;
    printf("Total: R$ %.2f", total);
    
  } else if (codigo == 5) {

    total = quantidade * 1.50;
    printf("Total: R$ %.2f", total);
    
  } else {

    printf("Código inválido");
  }
  
  
  return 0;
 
}