/*Escreva um programa que leia dois números inteiros e calcule o máximo divisor comum (MDC)
desses números.


#include <stdio.h>

int main(){

  int i1, i2, mdc, resto;

  printf("Insira os dois valores inteiros: ");
  scanf("%d %d", &i1, &i2);

  while (i2 != 0){
    resto = i1 % i2;
    i1 = i2;
    i2 = resto;
  }
  mdc = i1;

  printf("O MDC é: %d", mdc);
  
  return 0;
}*/

#include <stdio.h>

int main(){

int a, b, menor = 9999999, mdc, cont = 1;

printf("Insira os dois valores inteiros: ");
scanf("%d %d", &a, &b);

if (a < b){
  menor = a;
} else {
  menor = b;
}
  //while (cont <= menor) {
  for(cont = 1; cont <= menor; cont++){
    if ((a % cont == 0) && (b % cont == 0)){
      mdc = cont;
      printf("MDC parcial: %d\n", mdc);
      }
    printf("contador: %d\n", cont);
  //cont++;
  }
  printf("MDC final: %d", mdc);
  
    
return 0;
}
