#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

srand(time(NULL));
  
int vetor[9], i , aux, num, cont = 0;

for(i = 0; i < 9; i++){
  vetor[i] = rand() % 10;
  printf("%2d  ", vetor[i]);
}

aux = vetor[8];

  for(i = 8; i >= 1; i--){
    vetor[i] = vetor[i - 1];
  }

vetor[0] = aux;
  
  printf("\n Rotacao: \n");
  
  for(i = 0; i < 9; i++){
    printf("%2d  ", vetor[i]);
  }
  vetor[0] = aux;

  for(i = 0; i < 9; i++){
    printf("%2d  ", vetor[i]);
  }

  for(i = 0; i < 9; i++){
    vetor[i] = vetor[i] + i;
  }

  printf("\n Soma com indice: \n");
  for(i = 0; i < 9; i++){
    printf("%2d  ", vetor[i]);
  }

  num = rand() % 10;
  printf("\nProcurando valor %d\n", num);

  for(i = 0; i < 9; i++){
  if(num == vetor[i]){
    cont++;
    }
  }
  
  printf("O numero de ocorrencias no vetor é de: %d", cont);
  
return 0;
}

/*
printf("Preenchendo o vetor: ");
for(i = 0; i < 9; i++){
  printf("Indice %d: ", i);
  scanf("%d", &vetor[i]);
}

*/