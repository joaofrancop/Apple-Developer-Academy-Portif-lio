/*Escreva um programa que sorteie aleatoriamente 1000 números
  e armazene-os em um vetor. Em seguida, o usuário deve digitar um número e
  seu programa deve informar se o número digitado está contido no vetor ou
  não. Se estiver, diga em que posições do vetor ele é encontrado.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

  int random;
  int vet[1000];
  int verify, i, cont = 0;

  srand(time(NULL));
  random = rand() % 1001;
  
  printf("Verificador: ");
  scanf("%d", &verify);

  for(i = 0; i < 1001; i++){
    if(vet[i] == verify){
      printf("True\nPosição %d\n", i);
      cont++;
    }
  }
  if(cont == 0){
    printf("False");
  }
  
  return 0;
}