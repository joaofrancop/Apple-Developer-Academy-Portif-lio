/*Recentemente aconteceu
a fase regional da Maratona de Programação da SBC, onde mais de 100 times
participaram em mais de 40 sedes diferentes pelo Brasil. Seu amigo participou da
competição, e quando questionado sobre sua colocação lhe disse: “Ficamos no top 10”.
Você ficou feliz pelo seu amigo, mas não pode deixar de ficar curioso sobre qual foi
sua real colocação. “Top 10” poderia indicar qualquer posição entre primeiro e décimo
colocado, porém se ele estivesse em primeiro provavelmente teria dito “Top 1”, se
estivesse em segundo ou terceiro provavelmente teria dito “Top 3”, e se estivesse em
quarto ou quinto provavelmente teria dito “Top 5”. Logo, sua real colocação foi entre sexto
e décimo, pois as pessoas geralmente se colocam na menor categoria a qual pertencem.
Você reuniu então todas as categorias de colocações que as pessoas mais usam: 1,
3, 5, 10, 25, 50 e 100. Dada uma colocação K, diga o número da menor categoria que
esta colocação pertence.
ATENÇÃO:
● Cada caso de teste contém um inteiro K, representando uma colocação (1 ≤ K ≤
100);
● Para cada caso de teste, imprima uma linha contendo a frase “Top N”, e substitua a
letra N pelo número da menor categoria que a colocação K pertence.
Exemplos de entrada Exemplos de saída
7 Top 10
25 Top 25
26 Top 50*/

#include <stdio.h>

int main(void){

  int k;

  printf("Digite a colocação: ");
  scanf("%d", &k);

  if(k == 1){
    printf("Top 1");
  } else if(k == 2 || k == 3){
    printf("Top 3");
  } else if(k == 4 || k == 5){
    printf("Top 5");
  } else if(k > 5 && k <= 10){
    printf("Top 10");
  } else if(k > 10 && k <= 25){
    printf("Top 25");
  } else if(k > 25 && k <= 50){
    printf("Top 50");
  } else if(k > 50 && k <= 100){
    printf("Top 100");
  } else{
    printf("Valor inválido.");
  }
  
  return 0;
}