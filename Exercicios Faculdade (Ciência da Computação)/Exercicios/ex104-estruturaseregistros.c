/*Crie um programa que armazene o resultado de 5 jogos realizados em uma rodada do campeonato
  brasileiro de futebol. Para cada jogo, será necessário armazenar as seguintes informações:
  a. Data do jogo;
  b. Time mandante;
  c. Time visitante;
  d. Gols do mandante;
  e. Gols do visitante.
  Depois dos dados informados, o algoritmo deve escrever na tela os dados de cada jogo, indicando quem foi
  o vencedor ou se deu empate. Utilize um vetor de registros na sua implementação.*/

#include <stdio.h>

typedef struct {

char data[10];
char mandante[20];
char visitante[20];
int golsmandante;
int golsvisitante;

} brasileirao;

int main(void) {

brasileirao x[5];
int cont = 1;

  for (int i = 0; i < 5; i++){
    printf("\nInformaçoes jogo %d\n", i+1);

    getchar();
    
    printf("\nInsira a data do jogo: ");
    scanf("%[^\n]s", x[i].data);    

    getchar();

    printf("\nInsira o time mandante: ");
    scanf("%[^\n]s", x[i].mandante);

    getchar();

    printf("\nInsira o time visitante: ");
    scanf("%[^\n]s", x[i].visitante);
    
    printf("\nInsira os gols do time mandante: ");
    scanf("%d", &x[i].golsmandante);

    printf("\nInsira os gols do time visitante: ");
    scanf("%d", &x[i].golsvisitante);
  }

  for (int i = 0; i < 5; i++){
    printf("\n\nResultado Jogo %d\n\n", cont);
    cont++;
    printf("\nData: %s\n", x[i].data);
    
    if(x[i].golsmandante > x[i].golsvisitante){
      printf("Vencedor: %s", x[i].mandante);
      printf("\nResultado: %d x %d", x[i].golsmandante, x[i].golsvisitante);
      
    } else if(x[i].golsvisitante > x[i].golsmandante){
      printf("Vencedor: %s", x[i].visitante);
      printf("\nResultado: %d x %d", x[i].golsvisitante, x[i].golsmandante);
      
    } else{
      printf("Empate.");
      printf("\nResultado: %d x %d", x[i].golsmandante, x[i].golsvisitante);
    }
    printf("\n\n");
  }
  return 0;
}