/*19. Escreva uma função que determine a média e a situação de um aluno em uma disciplina. A função recebe como parâmetros as três notas de um aluno (p1, p2, e p3), seu número de faltas (faltas), o número total de aulas da disciplina (aulas) e o ponteiro para uma variável (media), conforme o seguinte protótipo:
    
    ```c
    char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media);
    ```
    
    - Na variável indicada pelo ponteiro media, a função deve armazenar a média do aluno, calculada como a média aritmética das três provas. Além disso, a função deve retornar um caractere indicando a situação do aluno no curso, definido de acordo com o seguinte critério:
        
        ![Untitled](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/744f81c3-2a9c-4380-abfd-47b01a43b339/Untitled.png)
        
    - Em seguida, escreva a função principal de um programa que utiliza a função anterior para determinar a situação de um aluno. O programa deve:
        - Ler do teclado três números reais e dois números inteiros, representando as notas da p1, p2 e p3, o número de faltas e o número de aulas, respectivamente;
        - Chamar a função desenvolvida na primeira questão para determinar a média e a situação do aluno na disciplina;
        - Exibir a média (com apenas uma casa decimal) e a situação do aluno, isto é, “APROVADO”, “REPROVADO” ou “REPROVADO POR FALTAS”, dependendo do caractere retornado pela função, conforme a tabela acima.*/

#include <stdio.h>

    char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media){
        
        *media = (p1 + p2 + p3)/3;

        if((float)faltas / aulas < 0.25){
            return 'F';
        } else if (*media < 6){
            return 'R';
        } else if (*media >= 6){
            return 'A';
        }
    }

int main(){

    float p1, p2, p3, media;
    int faltas, aulas;
    char r;

    printf("Insira as notas do aluno: ");
    scanf("%f %f %f", &p1, &p2, &p3);

    printf("Insira o numero de faltas: ");
    scanf("%d", &faltas);

    printf("Insira o numero de aulas: ");
    scanf("%d", &aulas);

    r = situacao(p1, p2, p3, faltas, aulas, &media);

    if(r == 'A'){
        printf("\nAprovado\n");
    } else if (r == 'R') {
        printf("\nReprovado\n");
    } else if (r == 'F') {
        printf("\nReprovado por falta\n");
    }

    printf("\nMedia = %.2f\n", media);

    return 0;
}