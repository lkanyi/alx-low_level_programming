#include "main.h"
#include <stdio.h>

/**
 * main- void reset_to_98(int*n);
 *
 * return: Always 0.
 */
int main(void)
{
	int n;

	n=402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}

