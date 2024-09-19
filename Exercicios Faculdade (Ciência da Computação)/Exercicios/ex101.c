/*Escreva um programa que exiba o quadrado de um número digitado no teclado.
  Escreva uma função para ler esse número e um procedimento para calcular seu quadrado.*/

#include <stdio.h>
#include <math.h>

double levalor(){
  double valor;
  do{
    printf("Informe um double positivo: ");
    scanf("%lf", &valor);
  }while(valor <= 0);
 
  return valor;
}

void quadrado(double numero){
  
  double resultado = pow(numero, 2.0);
  printf("%.2lf ao quadrado eh %.2lf", numero, resultado);
}

int main(void) {

  double num;

  num = levalor();

  quadrado(num);
  
  return 0;
}