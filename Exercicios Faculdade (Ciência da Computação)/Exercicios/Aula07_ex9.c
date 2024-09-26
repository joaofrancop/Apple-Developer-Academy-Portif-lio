/*Escreva um programa que leia primeiro os 6 números gerados pela loteria e depois os 6 números do seu bilhete. O programa então compara quantos números o jogador acertou. Em seguida, ele aloca espaço para um vetor de tamanho igual a quantidade de números corretos e guarda os números corretos nesse vetor. Finalmente, o programa exibe os números sorteados e os seus números corretos.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int loteria[6], bilhete[6], i, count = 0;
    int *vet = NULL;

    printf("Insira os 6 numeros gerados pela lotérica: ");

for(i = 0; i < 6; i++)
{
    printf("\nnumero %d: ", i + 1);
    scanf("%d", &loteria[i]);
}

    printf("Insira os 6 numeros do seu bilhete: ");

for(i = 0; i < 6; i++)
{
    printf("\nnumero %d: ", i + 1);
    scanf("%d", &bilhete[i]);
}

for(i = 0; i < 6; i++)
    {
        if(bilhete[i] == loteria[0])
        {
            vet = (int*) realloc(vet, (count + 1) * sizeof(int));
            count++;
            vet[i] = bilhete[i];
        } else if(bilhete[i] == loteria[1])
        {
            vet = (int*) realloc(vet, (count + 1) * sizeof(int));
            count++;
            vet[i] = bilhete[i];
        } else if(bilhete[i] == loteria[2])
        {
            vet = (int*) realloc(vet, (count + 1) * sizeof(int));
            count++;
            vet[i] = bilhete[i];
        } else if(bilhete[i] == loteria[3])
        {
            vet = (int*) realloc(vet, (count + 1) * sizeof(int));
            count++;
            vet[i] = bilhete[i];
        } else if(bilhete[i] == loteria[4])
        {
            vet = (int*) realloc(vet, (count + 1) * sizeof(int));
            count++;
            vet[i] = bilhete[i];
        } else if(bilhete[i] == loteria[5])
        {
            vet = (int*) realloc(vet, (count + 1) * sizeof(int));
            count++;
            vet[i] = bilhete[i];
        }
    }

for (i = 0; i < count; i++){
     printf("Numero sorteados: %d", loteria[i]);
}

for (i = 0; i < count; i++){
    printf("Numero acertados: %d", vet[i]);
}


    return 0;
}