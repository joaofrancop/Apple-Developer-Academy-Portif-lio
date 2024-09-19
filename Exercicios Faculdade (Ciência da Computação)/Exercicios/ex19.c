/*Uma empresa qualquer decidiu conceder um aumento de salários a seus
funcionários de acordo com a tabela a seguir:

Uma empresa qualquer decidiu conceder um aumento de salários a seus
funcionários de acordo com a tabela a seguir:
Salário atual Aumento
0,00 – 1.400,00 15%
1.400,01 – 2.000,00 12%
2.000,01 – 3.000,00 10%
3.000,01 – 3.800,00 7%
3.800,01 – 5.000,00 4%
acima de 5.000,00 Sem aumento
Escreva um algoritmo que leia o salário atual de um funcionário e escreva o
percentual de seu aumento e o valor do salário corrigido a partir desse aumento. */

#include <stdio.h>

int main() {

  float salario, aumento, resultado;
  
  printf("Digite o salário atual do funcionário: ");
  scanf(" %f", &salario);

  if (salario <= 1400) {

    aumento = salario * 0.15;
    resultado = salario + aumento;
    printf("A porcentagem de aumento é de 15%% e o valor do salário corrigido é de R$%.2f", resultado);
      
  } else if (salario >= 1400.01 && salario <= 2000) {

    aumento = salario * 0.12;
    resultado = salario + aumento;
    printf("A porcentagem de aumento é de 12%% e o valor do salário corrigido é de R$%.2f", resultado);
  } else if (salario >= 2000.01 && salario <= 3000) {

    aumento = salario * 0.10;
    resultado = salario + aumento;
    printf("A porcentagem de aumento é de 10%% e o valor do salário corrigido é de R$%.2f", resultado);
  } else if (salario >= 3000.01 && salario <= 3800) {

    aumento = salario * 0.07;
    resultado = salario + aumento;
    printf("A porcentagem de aumento é de 7%% e o valor do salário corrigido é de R$%.2f", resultado);
  } else if (salario >= 3800.01 && salario <= 5000) {

    aumento = salario * 0.04;
    resultado = salario + aumento;
    printf("A porcentagem de aumento é de 4%% e o valor do salário corrigido é de R$%.2f", resultado);
  } else if (salario > 5000) {

    printf("Sem aumento");
  }
  return 0;
}