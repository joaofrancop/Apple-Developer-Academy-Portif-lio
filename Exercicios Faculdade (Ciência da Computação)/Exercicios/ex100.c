/*Escreva uma função chamada pesoIdeal() que recebe como parâmetros a altura e o sexo de uma
  pessoa (M masculino e F feminino) e retorna o seu peso ideal, utilizando as seguintes fórmulas:
  ● para sexo masculino: (72.7 * altura) – 58
  ● para sexo feminino: (62.1 * altura) – 44.7
  Faça também o programa principal que recebe do usuário a sua altura, peso atual e sexo, e imprima
  na tela mensagem dizendo apenas se o usuário está acima ou abaixo de seu peso ideal, este calculado pela
  função pesoIdeal().*/
  
  #include <stdio.h>

// Função para calcular o peso ideal com base na altura e no sexo
float pesoIdeal(float altura, char sexo) {
    if (sexo == 'M' || sexo == 'm') {
        return (72.7 * altura) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        return (62.1 * altura) - 44.7;
    } else {
        return -1; // Retorna -1 se o sexo for inválido
    }
}

int main() {
    float altura, pesoAtual, pesoIdealCalculado;
    char sexo;

    // Entrada de dados
    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);
    
    printf("Digite o seu peso atual em kg: ");
    scanf("%f", &pesoAtual);
    
    printf("Digite o seu sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);

    // Cálculo do peso ideal
    pesoIdealCalculado = pesoIdeal(altura, sexo);

    // Verificação se o peso ideal foi calculado corretamente
    if (pesoIdealCalculado == -1) {
        printf("Sexo inválido.\n");
    } else {
        // Verificação se está acima ou abaixo do peso ideal
        if (pesoAtual > pesoIdealCalculado) {
            printf("Você está acima do seu peso ideal.\n");
        } else if (pesoAtual < pesoIdealCalculado) {
            printf("Você está abaixo do seu peso ideal.\n");
        } else {
            printf("Você está no seu peso ideal.\n");
        }
    }

    return 0;
}
