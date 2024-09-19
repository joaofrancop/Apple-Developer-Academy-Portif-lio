#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int numero_aleatorio;

  srand(time(NULL));               // semente da função rand
  numero_aleatorio = rand() % 101; // gerar valores de 0 a 100

  printf("Valor: %d", numero_aleatorio);

  return 0;
}

/*
int vetor[100], i;

for(i = 0; i < 100; i++){
  vetor[i] = rand() % 10;
  printf("indice %d:  %d\n, i, vetor[i]");
}

numeros aleatorios em intervalo definido:

entre 20 a 70 - (rand() % 51) + 20;
entre 25 e 90 (rand() % 66) + 25;
entre -10 e 10 (rand() % 21) - 10;
ente 0 e 99 float (rand() % 100) / 10.0
*/