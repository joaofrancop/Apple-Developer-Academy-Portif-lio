/*Leia dois números (a e b) do teclado, tal que a < b, e imprima a tabuada de cada um desses números.
○ Por exemplo, se forem lidos os números 3 e 5, apresentar a tabuada do 3, do 4 e do 5 (cada
uma de 1 a 10).*/

#include <stdio.h>

int main(void){

  int a, b, linha, i = 1;

  printf("Insira o valor de a:" );
  scanf("%d", &a);

  printf("Insira o valor de b:" );
  scanf("%d", &b);
  
if(a<b){
  for(linha = a; linha <= b; linha++){
    for(i = 1; i <= 10; i++){
      printf(" %d x %d = %d\n", i, linha, i*linha);
    }
    printf("-----------------\n");
  }
}else {
  printf("O valor de a deve ser menor que o valor de b");
  return 1;
}
  
  return 0;
}