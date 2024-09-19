/*4. Em uma certa papelaria, até 100 folhas, a cópia do xerox custa
R$ 0,25 e, acima de 100 folhas, cada cópia adicional custa R$ 0,20. Escreva
um algoritmo que dado o número total de cópias, informe o valor a ser pago.
*/

#include <stdio.h>

int main(){

  int copias;
  float valor;

  printf("Digite o número de cópias: ");
  scanf("%i", &copias);

  if(copias>=0 && copias<= 100){
    valor = copias * 0.25;
    printf("O valor a ser pago é: R$%.2f", valor);
  }else if(copias > 100){
    valor = (100*0.25) + ((copias-100) * 0.20);
    printf("O valor a ser pago é: R$%.2f", valor);
  }else {
    printf("Valor invalido");
  }
  return 0;
}