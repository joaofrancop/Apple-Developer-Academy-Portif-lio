/* Sabe-se que a direção de uma determinada escolinha faz a distribuição de
seus alunos de acordo com as idades dos mesmos. Dessa forma, os alunos são
distribuídos nas seguintes turmas de acordo com a classificação a seguir:
Turma Faixa etária
Turma A de 4 a 5 anos
Turma B de 6 a 8 anos
Turma C de 9 a 10 anos
Sem turmas abaixo de 4 anos e acima de 10 anos
Desenvolva um algoritmo que leia a idade de uma única criança e informe em qual
turma a mesma irá ter aulas. O algoritmo deve se preocupar em responder para o usuário
que a escolinha não possui turmas para a criança caso a mesma tenha menos que 4 anos
ou mais que 10 anos.
*/

#include <stdio.h>

int main(void) {

  int idade;

  printf("Digite a idade da criança: ");
  scanf(" %d", &idade);

  if (idade < 4 || idade > 10) {

    printf("A escolinha não possui turmas para a criança com idade menor do que 4 anos e maior do que 10 anos.");
  } else if (idade >= 4 && idade <= 5) {

    printf("A criança irá ter aulas na turma A.");
    
  } else if (idade >= 6 && idade <= 8) {

    printf("A criança irá ter aulas na turma B.");
    
  } else if (idade >= 9 && idade <= 10) {

    printf("A criança irá ter aulas na turma C.");
    
  }
  return 0;
}