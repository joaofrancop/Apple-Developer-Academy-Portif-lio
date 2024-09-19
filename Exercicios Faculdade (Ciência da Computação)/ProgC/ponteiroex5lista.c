int main (void) {
	int i; int *p;
	i = 1234; p = &i;
	printf ("*p = %d\n", *p);
	printf (" p = %ld\n", (long int) p);
	printf (" p = %p\n", (void *) p);
	printf ("&p = %p\n", (void *) &p);
	return 0;
}

/*
*p = 1234
p longint = posicao i 
p = posicao i
&p = posicao p
*/