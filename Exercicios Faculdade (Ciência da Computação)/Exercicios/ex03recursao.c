/*Faça funções que usem recursão comum para resolver os seguintes problemas. Se for possível, construa também soluções que usem recursão de cauda.

- Exemplo 03
    - Multiplicação:
    - Recebe dois números positivos não nulos a e b e retorna o resultado de a * b
    - Código*/

#include <stdio.h>

int multiplicacao (int a, int b){
    if (b == 1){
    return a;
    } else {
return a + multiplicacao(a, (b-1));
    }
}

void main(){

int a, b;

printf("Insira os numeros a serem multiplicados: ");
scanf("%d, %d", &a &b);

printf("Resultado: %d ", multiplicacao);

}