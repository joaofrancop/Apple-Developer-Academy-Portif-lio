/*Empolgada com a Copa do Mundo de Futebol, a Turma do
Chaves resolveu organizar sua própria copa no pátio da vila. Um dos times, chamado
Tamarindo, é formado por Chaves, Seu Madruga, Dona Clotilde, Professor Girafales,
Dona Neves, Jaiminho e Pópis. O outro time, chamado Groselha, é formado por
Chiquinha, Quico, Dona Florinda, Senhor Barriga, Nhonho, Godinez e Paty.
Escreva um programa que, para cada um dos três jogos realizados, leia do teclado o
número de gols de cada um dos times e imprima na tela o nome do time vencedor ou
“empate” se for esse o caso. Além disso, compute a pontuação de cada time em cada
jogo, sabendo que:
● em caso de derrota, soma-se 0 pontos;
● em caso de empate, soma-se 1 ponto;
● em caso de vitória, soma-se 3 pontos.
Por fim, analisando a soma dos pontos conquistados por cada time nos três jogos,
imprima na tela uma mensagem que informe qual deles é o vencedor da Copa da Vila.
*/

#include <stdio.h>

int main(void){

  int tamarindo = 0, groselha = 0, gols_tamarindo, gols_groselha, i = 0;

  printf("Gols do Tamarindo jogo 1: ");
  scanf("%d", &gols_tamarindo);

  printf("Gols do Groselha jogo 1: ");
  scanf("%d", &gols_groselha);

  if(gols_tamarindo>gols_groselha){
    tamarindo += 3;
  } else if(gols_groselha>gols_tamarindo){
    groselha +=3;
  } else{
    tamarindo += 1;
    groselha += 1;
  }

  gols_groselha = 0;
  gols_tamarindo = 0;

  printf("Gols do Tamarindo jogo 2: ");
  scanf("%d", &gols_tamarindo);

  printf("Gols do Groselha jogo 2: ");
  scanf("%d", &gols_groselha);

  if(gols_tamarindo>gols_groselha){
    tamarindo += 3;
  } else if(gols_groselha>gols_tamarindo){
    groselha +=3;
  } else{
    tamarindo += 1;
    groselha += 1;
  }

  gols_groselha = 0;
  gols_tamarindo = 0;

  printf("Gols do Tamarindo jogo 3: ");
  scanf("%d", &gols_tamarindo);

  printf("Gols do Groselha jogo 3: ");
  scanf("%d", &gols_groselha);

  if(gols_tamarindo>gols_groselha){
    tamarindo += 3;
  } else if(gols_groselha>gols_tamarindo){
    groselha +=3;
  } else{
    tamarindo += 1;
    groselha += 1;
  }

  if(tamarindo>groselha){
    printf("Tamarindo venceu a Copa da Vila\n");
  } else if(groselha>tamarindo){
    printf("Groselha venceu a Copa da Vila\n");
  } else {
    while(gols_groselha==gols_tamarindo){
    printf("Jogo de desempate.\n");
    printf("Gols do Tamarindo jogo de desempate: ");
    scanf("%d", &gols_tamarindo);

    printf("Gols do Groselha jogo de desempate: ");
    scanf("%d", &gols_groselha);

    if(gols_tamarindo>gols_groselha){
      printf("Tamarindo venceu o campeonato.\n");
    } else if(gols_groselha>gols_tamarindo){
      printf("Groselha venceu o campeonato.\n");
    } else{
      printf("Empate\n");
    }
    }
  }
  
  return 0;
}