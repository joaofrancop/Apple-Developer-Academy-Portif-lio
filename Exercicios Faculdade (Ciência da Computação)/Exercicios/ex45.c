/*10. A fabricação dos presentes para o Natal é um processo muito
complicado. Diversas vezes os duendes ficam até tarde trabalhando para que
tudo possa ser terminado a tempo e com perfeição. Para melhor gerenciar
seus cronogramas, os duendes estipularam quantos minutos são necessários
para fabricar cada presente. Já está quase no final do expediente, e um dos
duendes pediu sua ajuda. Faltam N minutos para a hora de ir embora, e restam
dois presentes para o duende Ed fabricar. Ajude-o a descobrir se ele
conseguirá fabricar os dois ainda hoje, ou se deve deixar o trabalho para
amanhã.
Cada caso de teste inicia com um inteiro N, indicando quantos minutos
faltam para o final do expediente. Em seguida haverá dois inteiros A e B,
indicando quantos minutos são necessários para fabricar os dois presentes
que Ed precisa fabricar. Como saída, imprima uma linha, contendo a frase
"Farei hoje!" caso seja possível fabricar os dois presentes antes do final do
expediente, ou "Deixa para amanha!" caso contrário.*/

#include <stdio.h>

int main(){

  int N, A, B;

  printf("Tempo para a hora de ir embora em minutos: ");
  scanf("%d", &N);

  printf("Tempo para fabricar o primeiro presente em minutos: ");
  scanf("%d", &A);
  printf("Tempo para fabricar o segundo presente em minutos: ");
  scanf("%d", &B);

  if(N >= A + B){
    printf("Farei hoje!\n");
  } else {
    printf("Deixa para amanha!");
  }
  return 0;
}