/*Quico tem 1,40 metro e cresce 2 centímetros por ano, enquanto Chaves tem 1,10 metro e cresce 3
centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos serão necessários
para que Chaves seja maior que Quico.*/

#include <stdio.h>

int main(void){

  float quico = 1.40, chaves = 1.10;
  int anos = 0;
  
  while (quico >= chaves) {
    quico = quico + 0.02;
    chaves = chaves + 0.03;

    anos++;
    printf("Anos: %d Quico: %.2f Chaves: %.2f\n", anos, quico, chaves);
  }

  printf("Serão necessários %d anos para que Chaves seja maior que Quico.", anos);

  return 0;
}