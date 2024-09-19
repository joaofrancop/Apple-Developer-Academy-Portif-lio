/*5. (Beecrowd | 2780) A organização da OIBR, Olimpíada
Internacional de Basquete de Robô, está começando a ter problemas. É que os
robôs desses times acertam quase todos os lançamentos, de qualquer posição
na quadra! Pensando bem, o jogo de basquete ficaria mesmo sem graça se
jogadores conseguissem acertar qualquer lançamento, não é mesmo? Uma
das medidas que a OIBR está implantando é uma nova pontuação para os
lançamentos, de acordo com a distância do robô para o início da quadra.
A quadra tem 2000 centímetros de comprimento. Dada a distância D do
robô até o início da quadra, onde está a cesta, a regra é a seguinte:
● Se 0 ≤ D ≤ 800, a cesta vale 1 ponto;
● Se 800 < D ≤ 1400, a cesta vale 2 pontos;
● Se 1400 < D ≤ 2000, a cesta vale 3 pontos.
A organização da OIBR precisa de ajuda para automatizar o placar do
jogo. Dado o valor da distância D (que não deve ser negativa e nem maior que
os 2000 centímetros do tamanho da quadra), você deve escrever um programa
para calcular o número de pontos do lançamento.*/

#include <stdio.h>

int main(){

  int D;

  printf("insira a distancia do lancamento: ");
  scanf("%d", &D);

  if(D>=0 && D<=800){
    printf("O lancamento vale: 1 ponto");
  } else if(D>800 && D<=1400){
    printf("O lancamento vale: 2 ponto");
    } else if(D>1400 && D<=2000){
    printf("O lancamento vale: 3 pontos");
    } else {
    printf("distancia invalida");
    }
  return 0;
}