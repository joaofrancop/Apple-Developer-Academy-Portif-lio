/*

  // Linguagem C


exemplo de exercicio if


#include <stdio.h>
int main() {
int idade;
printf("Digite a idade da pessoa: ");
scanf("%d", &idade);
if (idade < 18) {
printf("A pessoa eh menor de idade \n");
}
printf("A idade digitada foi: %d", idade);
return 0;
}


exemplo de resolucao 1


#include <stdio.h>
int main() {
float freq, media;
printf("Digite a media: ");
scanf("%f", &media);
printf("Digite a frequencia: ");
scanf("%f", &freq);
if ((media >= 7.0) && (freq >= 75.0)) {
printf("Aprovado");
}
else if ((media >= 4.0) && (freq >= 75.0)) {
printf("Em recuperacao");
}
else {
printf("Reprovado");
}
return 0;
} 


exemplo de resolucao 2


if (freq >= 75.0) {
if (media >= 6.0) {
printf("Aprovado");
} else if (media >= 4.0) {
printf("Em recuperacao");
} else {
printf("Reprovado por media");
}
} else {
printf("Reprovado por faltas");
}
return 0;
}
*/