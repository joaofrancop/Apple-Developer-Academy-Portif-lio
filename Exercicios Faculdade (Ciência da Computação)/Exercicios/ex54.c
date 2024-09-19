/*Escreva um programa que leia números inteiros positivos até que o número 0 seja digitado e
imprima a média desses números.*/

#include <stdio.h>

int main(void){

  int i, cont = 0, soma = 0;
  float media;

  do{
    printf("Digite um numero: ");
    scanf(" %d", &i);

    if(i > 0){
      soma += i;
      cont++;
    } else if ( i < 0){
      printf("Numero invalido!\n");
    }
  } while (i != 0);

  media = soma / cont;
  printf("A media dos numeros eh: %.2f", media);
  
  return 0;
}

