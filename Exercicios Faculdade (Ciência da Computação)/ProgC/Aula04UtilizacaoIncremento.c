#include <stdio.h>

int main ( void ) 
{
	int i;
	int *p = &i;

	printf( "End %d\n" , p );
	p++;
	printf( "End %d\n" , p );

	return 0;
}



/*#include <stdio.h>
//A partir do exemplo anterior verifique os endereços utilizando, os tipos : “int”, “long int”, “double” e “char”;

int main ( void ) 
{
	int i, *pi = &i;
	long int l, *pl = &l;
	double d, *pd = &d;
	char c , *pc = &c;

	printf( "End int = %d\n" , pi );
	printf( "End long = %d\n" , pl );
	printf( "End double = %d\n" , pd );
	printf( "End char = %d\n" , pc );
	pi++;
	pl++;
	pd++;
	pc++;
	printf( "End int = %d\n" , pi );
	printf( "End long = %d\n" , pl );
	printf( "End double = %d\n" , pd );
	printf( "End char = %d\n" , pc );

	return 0;
}*/




/*
//Manipular um vetor a partir da aritmética de ponteiros

#include <stdio.h>

void main() {
	int arr[10];     
	int *el;        
	int i;
	
	el = &arr[0];
	
	for (i=0; i<10; ++i)
	   *(el + i) = 0;
	}*/





/*
Comparação de Igualdade (==):
Você pode comparar dois ponteiros para ver se eles apontam para a mesma localização de memória. Dois ponteiros são considerados iguais se eles apontam para a mesma posição na memória.
int *ponteiro1, *ponteiro2;
if (ponteiro1 == ponteiro2) {
    // Ponteiros apontam para a mesma posição de memória
}*/





/*
Comparação de Diferença (!=):
Você pode verificar se dois ponteiros são diferentes, ou seja, se eles não apontam para a mesma posição na memória.
int *ponteiro1, *ponteiro2;
if (ponteiro1 != ponteiro2) {
    // Ponteiros apontam para posições diferentes de memória
}*/





/*
int strlen_pointers(char *str)
{
char *s = str;
while( *s != '\0' )
s++;
return ( s - str );
}

int strlen_arrays( char s[] )
{
int i = 0;
while( s[i] != '\0' )
i++;
return ( i );
}
*/