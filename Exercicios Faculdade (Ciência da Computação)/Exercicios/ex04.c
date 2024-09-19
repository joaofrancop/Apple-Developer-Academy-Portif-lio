/*4. Escreva um algoritmo que leia o valor total devido por um cliente, quantidade
de dias de atraso e percentual de multa por dia de atraso. Aplique a porcentagem de multa
pelo atraso do pagamento e imprima o valor total devido.*/

#include <stdio.h>

int main() {

  float valordevido, percentualdemulta, resultado;
  int diasdeatraso;

  printf("insira o valor devido:\n ");
  scanf("%f", &valordevido);

  printf("insira o valor de dias de atraso:\n");
  scanf("%i", &diasdeatraso);

  printf("insira o valor do percentual de multa\n");
  scanf("%f", &percentualdemulta);

  resultado = valordevido + (valordevido*(diasdeatraso*percentualdemulta/100));

  printf("o valor devido com a multa aplicada é %.2f\n", resultado);



  return 0;
}