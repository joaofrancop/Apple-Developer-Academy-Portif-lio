/*Suponha que um banco permita no máximo 5 transações enviadas por PIX em um dia. Construa um
  programa que receba do teclado o saldo disponível na conta do cliente. Em seguida, cadastre os
  dados de cada um dos 5 PIX enviados (chave e valor). A cada PIX cadastrado, apresente o saldo
  atual da conta do cliente. Caso o cliente não tenha dinheiro suficiente para enviar o PIX, exiba uma
  mensagem de erro e não faça a transação. Ao final, imprima os dados das transações e o saldo da
  conta do cliente*/

#include <stdio.h>
#include <string.h>

#define MAX_PIX 5

typedef struct {
    char chave[50];
    float valor;
} Pix;

int main() {
    float saldo;
    Pix transacoes[MAX_PIX];
    int contador = 0;

    // Receber o saldo disponível na conta do cliente
    printf("Digite o saldo disponível na conta: R$ ");
    scanf("%f", &saldo);

    // Loop para cadastrar os 5 PIX
    for (int i = 0; i < MAX_PIX; i++) {
        char chave[50];
        float valor;

        // Receber a chave PIX
        printf("\nDigite a chave PIX #%d: ", i + 1);
        scanf("%s", chave);

        // Receber o valor do PIX
        printf("Digite o valor do PIX #%d: R$ ", i + 1);
        scanf("%f", &valor);

        // Verificar se há saldo suficiente
        if (valor > saldo) {
            printf("Erro: Saldo insuficiente para realizar esta transação.\n");
        } else {
            // Registrar a transação
            strcpy(transacoes[contador].chave, chave);
            transacoes[contador].valor = valor;
            contador++;

            // Subtrair o valor do PIX do saldo
            saldo -= valor;

            // Exibir o saldo atual
            printf("PIX cadastrado com sucesso. Saldo atual: R$ %.2f\n", saldo);
        }
    }

