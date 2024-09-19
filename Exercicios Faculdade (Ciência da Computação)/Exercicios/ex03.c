/*3. Calcular o aumento que será dado a um funcionário, obtendo do usuário as
seguintes informações: salário atual e a porcentagem de aumento. Apresentar o
novo valor do salário e o valor do aumento.
*/

#include <stdio.h>

int main() {

  float salarioatual, porcentagemdeaumento, novosalario, aumento;

  printf("insira o salario atual:\n ");
  scanf("%f", &salarioatual);

  printf("insira a porcentagem de aumento:\n ");
  scanf("%f", &porcentagemdeaumento);

  novosalario = salarioatual + (salarioatual * porcentagemdeaumento / 100);
  aumento = (salarioatual * porcentagemdeaumento / 100);

  printf("o valor do aumento é: %.1f e o valor do novo salario é %.2f\n",
         aumento, novosalario);

  return 0;
}