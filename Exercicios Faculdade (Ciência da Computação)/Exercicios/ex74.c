/*Na matemática, um número perfeito é um número
inteiro para o qual a soma de todos os seus divisores positivos próprios (excluindo ele mesmo) é igual ao
próprio número. Por exemplo, o número 6 é perfeito, pois 1+2+3 é igual a 6. Sua tarefa é escrever um
programa que imprima se um determinado número é perfeito ou não.
Entrada: A entrada contém vários casos de teste. A primeira linha da entrada contém um inteiro N
(1 ≤ N ≤ 20), indicando o número de casos de teste da entrada. Cada uma das N linhas seguintes contém
um valor inteiro X (1 ≤ X ≤ 10^8), que pode ser ou não, um número perfeito.
Saída: Para cada caso de teste de entrada, imprima a mensagem “X eh perfeito” ou “X nao eh
perfeito”, de acordo com a especificação fornecida.
Exemplo de entrada Exemplo de saída
3
6    6 eh perfeito
5    5 nao eh perfeito
28    28 eh perfeito
*/

#include <stdio.h>

int main(void) {
    int n, x, cont = 0, i, soma;

    do {
        printf("Insira o número de casos de teste: ");
        scanf("%d", &n);
    } while (n <= 0 || n >= 20);

    while (cont < n) {
        printf("Insira o numero para o caso de teste %d: ", cont + 1);
        scanf("%d", &x);

        soma = 0;

        for (i = 1; i < x; i++) {
            if (x % i == 0) {
                soma += i;
            }
        }

        if (soma == x) {
            printf("%d eh perfeito\n", x);
        } else {
            printf("%d nao eh perfeito\n", x);
        }

        cont++;
    }

    return 0;
}