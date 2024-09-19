#include <stdio.h>
int main() {
float valor, produto;
produto = 1;
do {
printf("Digite um valor: ");
scanf("%f", &valor);

produto = produto * valor;
printf("Produto parcial: %f \n \n", produto);
} while (produto <= 100);

printf("O produto e: %f", produto);
return 0;
}