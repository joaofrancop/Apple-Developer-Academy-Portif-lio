void main() {
	int x = 1;
	int y = 2;
	int *ip;

	ip = &x;
	y = *ip;
	*ip = 0;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("*ip = %d\n", *ip);


}

/*
x = 0
y = 1
*ip = 0
*/