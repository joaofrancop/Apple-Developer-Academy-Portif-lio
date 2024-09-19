/*Crie um algoritmo que ajude o DETRAN a saber o total derecursos que foram arrecadados com a aplicação de multas de trânsito. Oalgoritmo deve ler as seguintes informações para cada motorista:
● O número da carteira de motorista (de 1 a 4327)
● Número de multas;
● Valor da cada uma das multas.
Deve ser impresso o valor da dívida de cada motorista e, ao final daleitura, o total de recursos arrecadados (somatório de todas as multas). Oalgoritmo deverá imprimir também o número da carteira do motorista queobteve o maior número de multas*/

#include <stdio.h>

int main() {
    int numCarteira, numMultas, numeroMotoristaMaxMultas = 0, maxMultas = 0;
    float valorMulta, totalRecursos = 0;

    printf("Digite as informações dos motoristas:\n");

    for (int i = 1; i <= 4327; i++) {
        printf("\nMotorista %d:\n", i);

        printf("Número da carteira de motorista (1 a 4327): ");
        scanf("%d", &numCarteira);

        if (numCarteira <= 0 || numCarteira > 4327) {
            printf("Número da carteira inválido.\n");
            continue; // Reinicia o loop para o próximo motorista
        }

        printf("Número de multas: ");
        scanf("%d", &numMultas);

        if (numMultas < 0) {
            printf("Número de multas inválido.\n");
            continue; // Reinicia o loop para o próximo motorista
        }

        printf("Valor de cada multa: ");
        scanf("%f", &valorMulta);

        if (valorMulta <= 0) {
            printf("Valor da multa inválido.\n");
            continue; // Reinicia o loop para o próximo motorista
        }

        float dividaMotorista = numMultas * valorMulta;
        printf("Dívida do motorista: %.2f\n", dividaMotorista);

        totalRecursos += dividaMotorista;

        if (numMultas > maxMultas) {
            maxMultas = numMultas;
            numeroMotoristaMaxMultas = numCarteira;
        }
    }

    printf("\nTotal de recursos arrecadados: %.2f\n", totalRecursos);
    printf("Número da carteira do motorista com mais multas: %d\n", numeroMotoristaMaxMultas);

    return 0;
}