/*Elaborar um programa que leia dez valores numéricos reais e apresente no final a soma e a média
  dos valores lidos.*/

#include <stdio.h>

int main(void) {

  float num, soma = 0.0, media;
  int cont = 1;

  while (cont <= 10){

    printf("Insira os valores: ");
    scanf(" %f", &num);

    soma = soma + num;

    media = soma / cont;
    
    printf("cont: %d\n soma parcial %.2f\n media %.2f\n", cont, soma, media);
    
    cont++;
    
  } 
  
  return 0;
}