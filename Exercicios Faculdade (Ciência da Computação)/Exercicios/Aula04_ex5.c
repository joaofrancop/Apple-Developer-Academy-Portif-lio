/*Escreva uma função que recebe dois arrays de inteiros (array de origem e array de destino) e seu tamanho como parâmetros. A função deve copiar os elementos do array de origem para o array de destino usando aritmética de ponteiros.*/

#include <stdio.h>

void func(int *vet1,int *vet2,int x){
    
    for(int i = 0; i < x; i++){
        *(vet2 + i) = *(vet1 + i); 
    }    
}

int main(){

    int x;

    printf("Insira tamanho do vet: ");
    scanf("%d", &x);

    int origem[x];
    int destino[x];

    for (int i = 0; i < x; i++) {
        printf("Insira o valor na posição %d do array de origem: ", i);
        scanf("%d", &origem[i]);
    }

    func(origem, destino, x);

    for(int i = 0; i < x; i++){
        printf("\nPosição %d valor = %d", i, destino[i]);
    }   

    return 0;
}