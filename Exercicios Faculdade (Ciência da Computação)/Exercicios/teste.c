#include <stdio.h>

int fatorial (int n, int a, int b){
  if(n == 1 || n == 2){
    return b;
  } else {
    return fatorial(n - 1, b, a+b);
  }
}

void main(){
  int n = 30;
  int a = 1, b = 1;
  printf("Fatorial = %d\n", fatorial(n, a, b));
  
}