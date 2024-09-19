/*Degustação de chá às escuras é a habilidade de
identificar um chá usando apenas seus sentidos do olfato e paladar. Isso faz parte da Competição Ideal
de Consumidores de Chá Puro (da sigla em inglês ICPC), que um programa de TV local está
organizando. Durante o show, um bule de chá completo é preparado e são entregues uma xícara de chá
para cada um dos cinco competidores. Os participantes devem cheirar, saborear e avaliar a amostra, de
modo a identificar o tipo de chá, que pode ser: (1) o chá branco; (2) chá verde; (3) chá preto; ou (4) chá
de ervas. No final, as respostas são verificadas para determinar o número de suposições corretas.
Dado o tipo de chá real e as respostas fornecidas, determinar o número de participantes que receberam
a resposta correta.
ATENÇÃO:
● Um dos valores de entrada deve ser um inteiro representando o tipo de chá correto [1, 4]. Além
disso, devem ser lidos cinco inteiros que indicam a resposta dada por cada competidor [1, 4];
● Garanta que os valores de entrada estão nos intervalos corretos;
● A saída contém um inteiro representando o número de competidores que obtiveram a resposta
correta;
● Utilize as estruturas condicionais e de repetição adequadas.*/

#include <stdio.h>

int main(void){

  int P1, P2, P3, P4, P5, resposta, cont=0;

  printf("Digite o tipo de chá correto [1, 4]: ");
  scanf("%d", &resposta);

  if(resposta<=1 || resposta>=4){
    printf("Valor inválido.");
    return 1;
  }

  printf("Digite a resposta do competidor 1 [1, 4]: ");
  scanf("%d", &P1);

  printf("Digite a resposta do competidor 2 [1, 4]: ");
  scanf("%d", &P2);

  printf("Digite a resposta do competidor 3 [1, 4]: ");
  scanf("%d", &P3);

  printf("Digite a resposta do competidor 4 [1, 4]: ");
  scanf("%d", &P4);

  printf("Digite a resposta do competidor 5 [1, 4]: ");
  scanf("%d", &P5);

  if(P1>=1 && P1<=4 && P1==resposta){
    cont++;
  }
  if(P2>=1 && P2<=4 && P2==resposta){
    cont++;
  }
  if(P3>=1 && P3<=4 && P3==resposta){
    cont++;
  }
  if(P4>=1 && P4<=4 && P4==resposta){
    cont++;
  }
  if(P5>=1 && P5<=4 && P5==resposta){
    cont++;
  }

  printf("O número de competidores que acertaram foi: %d", cont);
  
  return 0;
}  