/*Escrever um algoritmo que leia uma quantidade desconhecida de números e conte quantos deles
estão nos seguintes intervalos: [0,25], [26,50], [51,75] e [76,100]. A entrada de dados deve terminar
quando for lido um número negativo*/

#include <stdio.h>

int main(void){

  int cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, num;

  do{
    printf("Digite um número: ");
    scanf("%d", &num);
    if (num >= 0 && num <= 25){
      cont1++;
    } else if (num >= 26 && num <= 50){
      cont2++;
    } else if (num >= 51 && num <= 75){
      cont3++;
    } else if (num >= 76 && num <= 100){
      cont4++;
    } 
  } while (num >= 0);
  
  printf("Números no intervalo [0,25]: %d\n", cont1);
  printf("Números no intervalo [26,50]: %d\n", cont2);
  printf("Números no intervalo [51,75]: %d\n", cont3);
  printf("Números no intervalo [76,100]: %d\n", cont4);

  return 0;
  
}