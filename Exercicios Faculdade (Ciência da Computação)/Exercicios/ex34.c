/*Construa um algoritmo que funcione como uma calculadora simples. A calculadora deve realizar as
operações de soma (+), subtração (-), multiplicação (*) e divisão (/). O usuário deve informar ao
algoritmo dois operandos (dois números) e a operação. O algoritmo deve retornar o resultado da
operação ou uma mensagem de erro caso o usuário solicite uma operação não definida.
*/

#include <stdio.h>

int main(void){

  float x, y;
  char operacao;

  printf("Insira o primeiro valor: \n");
  scanf("%f", &x);

  printf("Insira a operação: \n");
  scanf(" %c", &operacao);

  printf("Insira o segundo valor: \n");
  scanf("%f", &y);

  switch(operacao){
    case '+':
      printf("A soma é: %f", x + y);break;
    case '-':
      printf("A subtração é: %f", x - y);break;
    case '*':
      printf("A multiplicação é: %f", x * y);break;
    case '/':
      printf("A divisão é: %f", x / y);break;
    default: printf("Operação inválida");break;
  }
  return 0;  
  
}