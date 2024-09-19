/*3. Leia 2 valores inteiros (A e B). Após, o programa deve mostrar
uma mensagem "Sao Multiplos" ou "Nao sao Multiplos", indicando se os
valores lidos são múltiplos entre si.
*/

#include <stdio.h>  

int main(){

int a, b;
  
  printf("digite os valores de a e b: ");
  scanf("%i %i", &a, &b);

  if(a%b ==0 || b%a ==0){
    printf("sao multiplos");
  } else{
    printf("nao sao multiplos");
  }
  return 0;
}