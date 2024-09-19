/*Escreva um programa que leia uma sequência de números inteiros até que o valor zero seja lido. Com
esses valores, calcule a soma dos números ímpares e a média dos números pares*/

#include <stdio.h>

int main(void){

  int num, somaimpares = 0,  contador = 0;
  float media, somapares = 0; 
  
  do{
    printf("Digite um numero inteiro: ");
    scanf(" %d", &num);
   
      if (num % 2 != 0){
      somaimpares += num;
      } else if ((num % 2 == 0) && (num != 0)){
      somapares += num;
      contador++;
      }
    } while (num != 0);

  printf("Soma dos numeros impares: %d\n", somaimpares);
  media = somapares / contador;
  printf("Media dos numeros pares: %.2f\n", media);

  return 0;
}
