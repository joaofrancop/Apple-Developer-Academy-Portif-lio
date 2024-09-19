      /*#include <stdio.h>
      #include <time.h>

      // Função Fibonacci recursiva tradicional
      int fibonacci_recursive(int n) {
          if (n <= 1)
              return n;
          return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
      }

      // Função auxiliar para a recursividade em cauda
      int fibonacci_tail_recursive_helper(int n, int a, int b) {
          if (n == 0)
              return a;
          if (n == 1)
              return b;
          return fibonacci_tail_recursive_helper(n - 1, b, a + b);
      }

      // Função Fibonacci usando recursividade em cauda
      int fibonacci_tail_recursive(int n) {
          return fibonacci_tail_recursive_helper(n, 0, 1);
      }

      int main() {
          int n = 60; // Exemplo de número para testar Fibonacci
          clock_t start, end;
          double cpu_time_used;

          // Teste da recursividade tradicional
          start = clock();
          int result_recursive = fibonacci_recursive(n);
          end = clock();
          cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
          printf("Fibonacci recursivo (%d): %d\n", n, result_recursive);
          printf("Tempo (recursivo): %f segundos\n", cpu_time_used);

          // Teste da recursividade em cauda
          start = clock();
          int result_tail_recursive = fibonacci_tail_recursive(n);
          end = clock();
          cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
          printf("Fibonacci recursivo em cauda (%d): %d\n", n, result_tail_recursive);
          printf("Tempo (recursivo em cauda): %f segundos\n", cpu_time_used);

          return 0;
      }

*/
#include <stdio.h>
#include <time.h>

// Função Fibonacci recursiva tradicional
int fibonacci_recursive(int n) {
    if (n <= 1)
        return n;
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

// Função auxiliar para a recursividade em cauda
int fibonacci_tail_recursive_helper(int n, int a, int b) {
    if (n == 0)
        return a;
    if (n == 1)
        return b;
    return fibonacci_tail_recursive_helper(n - 1, b, a + b);
}

// Função Fibonacci usando recursividade em cauda
int fibonacci_tail_recursive(int n) {
    return fibonacci_tail_recursive_helper(n, 0, 1);
}

int main() {
    int n = 50; // Exemplo de número para testar Fibonacci
    clock_t start, end;
    double cpu_time_used;

    // Teste da recursividade tradicional
    start = clock();
    int result_recursive = fibonacci_recursive(n);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Fibonacci recursivo (%d): %d\n", n, result_recursive);
    printf("Tempo (recursivo): %f segundos\n", cpu_time_used);

    // Teste da recursividade em cauda
    start = clock();
    int result_tail_recursive = fibonacci_tail_recursive(n);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Fibonacci recursivo em cauda (%d): %d\n", n, result_tail_recursive);
    printf("Tempo (recursivo em cauda): %f segundos\n", cpu_time_used);

    return 0;
}
