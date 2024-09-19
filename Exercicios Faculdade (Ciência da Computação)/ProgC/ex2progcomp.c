//Realizar a soma de todos os inteiros no intervalo de [m,n]
/*#include <stdio.h>

  int soma(int m, int n) {
      int soma = 0;
      // Corrigindo a lógica para somar todos os inteiros no intervalo [m, n]
      for (int i = m; i <= n; i++) {
          soma += i;
      }
      return soma;
  }

  int main(void) {
      int m, n;
      printf("Insira os valores do intervalo: ");
      scanf("%d %d", &m, &n);

      // Verificar se m é maior que n, caso em que o intervalo é inválido
      if (m > n) {
          printf("O valor de m deve ser menor ou igual ao valor de n.\n");
      } else {
          int resultado = soma(m, n);
          printf("Resultado da soma no intervalo indicado: %d\n", resultado);
      }

      return 0;
  }
*/

#include <stdio.h>

int soma(int m, int n){
  int soma = 0;
  for(int i = m; i < n; i++){
    soma=+1;
  }
  return soma;
}

int main(void) {

  int m, n, x;
  printf("Insira os valores do intervalo: ");
  scanf("%d %d", &m, &n);

  int resultado = soma(m,n);
  printf("Resultado da soma no intervalo indicado: %d", resultado);
  
  return 0;
}