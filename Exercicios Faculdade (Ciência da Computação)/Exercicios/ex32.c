/*Escreva um programa que receba um número inteiro de 1 a 7 e exiba o dia da semana
correspondente.*/

#include <stdio.h>

int main(void){

  int dia;

  printf("Insira um numero de 1 a 7: ");
  scanf("%d", &dia);

  switch(dia){
    case 1: printf("Domingo"); break;
    case 2: printf("Segunda-feira"); break;
    case 3: printf("Terça-feira"); break;
    case 4: printf("Quarta-feira"); break;
    case 5: printf("Quinta-feira"); break;
    case 6: printf("Sexta-feira"); break;
    case 7: printf("Sábado"); break;
    default: printf("Inválido");
  }
  return 0;
}