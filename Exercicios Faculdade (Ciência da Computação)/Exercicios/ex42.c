/*7. Leia quatro números (N1
, N2
, N3
, N4
), cada um deles com uma
casa decimal, correspondente às quatro notas de um aluno. Calcule a média
com pesos 2, 3, 4 e 1, respectivamente, para cada uma destas notas e mostre
esta média acompanhada pela mensagem "Media: ". Se esta média for maior
ou igual a 7.0, imprima a mensagem "Aluno aprovado.". Se a média calculada
for inferior a 5.0, imprima a mensagem "Aluno reprovado.". Se a média
calculada for um valor entre 5.0 e 6.9, inclusive estas, o programa deve
imprimir a mensagem "Aluno em exame".

No caso do aluno estar em exame, leia um valor correspondente à nota
do exame obtida pelo aluno. Imprima então a mensagem "Nota do exame: "
acompanhada pela nota digitada. Recalcule a média (some a pontuação do
exame com a média anteriormente calculada e divida por 2). e imprima a
mensagem "Aluno aprovado." (caso a média final seja 5.0 ou mais ) ou "Aluno
reprovado.", (caso a média tenha ficado 4.9 ou menos). Para estes dois casos
(aprovado ou reprovado após ter pego exame) apresente na última linha uma
mensagem "Media final: " seguido da média final para esse aluno.

printf("\n média: %.1f", media);

*/

#include <stdio.h>

int main(){

  float n1, n2, n3, n4, media, exame, final;

  printf("Digite as 4 notas do aluno: ");
  scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

  media = ((n1 *2.0)+(n2 *3.0)+(n3 *4.0)+(n4 *1.0))/10.0;

  if(media >=7.0){
    printf("Aluno aprovado.");
     printf("\n média: %.1f", media);
  } else if (media<5.0){
    printf("Aluno reprovado.");
     printf("\n média: %.1f", media);
  } else {
    printf("Aluno em exame.");
     printf("\n média: %.1f", media);
    printf("\nNota do exame: ");
    scanf("%f", &exame);
    final = (media+exame)/2;
    if(final >= 5.0){
      printf("Aluno aprovado.");
      printf("\nMedia final: %.1f", final);
    } else {
      printf("Aluno reprovado.");
      printf("\nMedia final: %.1f", final);
       }
    }
   
  
    return 0;
  
}