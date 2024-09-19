/*#include <stdio.h>

int fatorial( int n )
{
    if ( (n == 1) || (n == 0) ){
      return 1;
    }
    else { 
      return fatorial( n - 1 ) * n;
    }
}

void main(){
    int n = 5;
    printf("Fatorial = %d\n", fatorial( n ) );
}
*/

#include <stdio.h>

int fatorial (int n, int a, int b){
  if(n == 1 || n == 2){
    return b;
  } else {
    return fatorial(n - 1, b, a+b);
  }
}

void main(){
  int n = 20;
  int a = 1, b = 1;
  printf("Fatorial = %d\n", fatorial(n, a, b));
  
}

/*#include <stdio.h>

// Função auxiliar para o cálculo do fatorial usando recursividade em cauda
int fatorial_aux(int n, int acumulador) {
    if (n == 0 || n == 1) {
        return acumulador;
    } else {
        return fatorial_aux(n - 1, acumulador * n);
    }
}

// Função principal que chama a função auxiliar
int fatorial(int n) {
    return fatorial_aux(n, 1);
}

void main() {
    int n = 5;
    printf("Fatorial = %d\n", fatorial(n));
}
*/