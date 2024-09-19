//Realizar a soma de n elementos.

#include <stdio.h>

int soma (int n) {
  if (n<=1){
  return n;
  }
  else{
  return (n+soma(n-1));
  }

}
int main(void) {
  
  int n;

  printf("Insira a quantidade de elementos: ");
  scanf("%d", &n);

  int resultado = soma(n);
  printf("O resultado é %d", resultado);
  
  return 0;
}