/* Fazer um programa para
a. receber do usuário um tempo em segundos, correspondente à duração de um evento
qualquer (por ex. jogo de futebol)
b. calcular e mostrar ao usuário o tempo equivalente em horas, minutos e segundos */

#include <stdio.h>

int main () {

int segundos;
float minutos, horas;

  printf("insira o tempo em segundos: ");
  scanf("%d", &segundos);

  minutos = segundos / 60;
  horas = minutos / 60;

  printf("o tempo em minutos é: %.2f\n o tempo em horas é: %.2f\n", minutos, horas);
  
  return 0;
}