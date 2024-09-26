#include <stdio.h>
#include <stdlib.h>

void copiarValores(int *vetOrigem, int tamOrigem, int **vetDestino, int *tamDestino) {
    // Se o tamanho do vetor de destino for menor que o vetor de origem, redimensiona
    if (*tamDestino < tamOrigem) {
        // Redimensiona o vetor de destino
        int *temp = (int *) realloc(*vetDestino, tamOrigem * sizeof(int));
        if (temp == NULL) {
            printf("Erro ao redimensionar o vetor de destino.\n");
            exit(1); // Finaliza o programa em caso de erro
        }
        *vetDestino = temp; // Atualiza o ponteiro do vetor de destino
        *tamDestino = tamOrigem; // Atualiza o tamanho do vetor de destino
    }

    // Copia os valores do vetor de origem para o vetor de destino
    for (int i = 0; i < tamOrigem; i++) {
        (*vetDestino)[i] = vetOrigem[i]; // Copia o valor do vetor de origem
    }
}

int main() {
    int tam1, tam2;

    printf("Insira o tamanho do primeiro vetor: ");
    scanf("%d", &tam1);

    printf("Insira o tamanho do segundo vetor: ");
    scanf("%d", &tam2);

    // Alocação do vetor de origem
    int *vet1 = (int *) malloc(tam1 * sizeof(int));
    // Alocação do vetor de destino
    int *vet2 = (int *) malloc(tam2 * sizeof(int));

    if (vet1 == NULL || vet2 == NULL) {
        printf("Erro ao alocar memória para os vetores.\n");
        return 1;
    }

    // Leitura dos valores do vetor de origem
    for (int i = 0; i < tam1; i++) {
        printf("Insira valor da posição %d do vetor1: ", i);
        scanf("%d", (vet1 + i));
    }

    // Chama a função para copiar os valores do vetor de origem para o vetor de destino
    copiarValores(vet1, tam1, &vet2, &tam2); // Passa o ponteiro do vetor de destino e seu tamanho

    // Exibindo o vetor copiado
    printf("Conteúdo do vetor2 após a cópia:\n");
    for (int i = 0; i < tam2; i++) { // Exibe todos os elementos do vetor de destino
        printf("Posição %d valor %d\n", i, vet2[i]);
    }

    // Liberando a memória alocada
    free(vet1);
    free(vet2);

    return 0;
}
