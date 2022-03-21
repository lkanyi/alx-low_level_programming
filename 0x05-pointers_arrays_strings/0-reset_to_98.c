#include <stdio.h>

void reset_to_98(int *);

/**
 * main- check alx low level programming.
 *
 * return: Always 0.
 */
int main(void)
{
	int n;

	n=402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("%d\n", n);
	return (0);
}

