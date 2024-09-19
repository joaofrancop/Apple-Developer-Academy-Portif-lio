/*Elabore um algoritmo que efetue a média aritmética de todos os números pares que se encontram
no conjunto dos números inteiros de 1 até 100.
*/

#include <stdio.h>

int main(void){

  int cont = 2, contpares = 0;
  float media, soma = 0;

  while(cont <= 100){

    soma += cont;
    contpares++;
    media = soma / contpares;
    
    cont += 2;
    printf("Pares: %d Soma: %d\n", contpares, soma);
    
   /*
   int cont = 1;
   
   if(cont % 2 == 0){
      soma += cont;
      contpares++;
      printf("Pares: %d Soma: %d\n", contpares, soma);
    }

    cont++;*/
  }

  media = soma / contpares;

  printf("A média dos números pares entre 1 e 100: %.2f", media);
  
  return 0;
}