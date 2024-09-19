/*9. Faça um programa que efetue o cálculo do salário líquido de um professor.
Os dados fornecidos serão: valor da hora aula, número de aulas dadas no mês e percentual
de desconto do INSS.*/

#include <stdio.h>

int main() {

float valor_hora, aulas_mes, salario_bruto, salario_liquido, descontoinss;

  printf("insira o valor da hora aulas:\n");
  scanf("%f", &valor_hora);

  printf("insira o numero de aulas dadas no mes:\n");
  scanf("%f", &aulas_mes);

  printf("insira a porcentagem de desconto do inss:\n");
  scanf("%f", &descontoinss);

  salario_bruto = valor_hora * aulas_mes;
  salario_liquido = salario_bruto - (salario_bruto * descontoinss / 100);

  printf("o valor do salario liquido do professor é: %f\n", salario_liquido);

  return 0;
}