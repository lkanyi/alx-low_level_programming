#include "main.h"
<<<<<<< HEAD
#include "stdlib.h>"

=======
#include <stdlib.h>
>>>>>>> 3481ce3cd3a4c217b16d2b47b724468cbf82fd6c
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
<<<<<<< HEAD

char *create_array(unsigned int size, char c);
=======
char *create_array(unsigned int size, char c)
>>>>>>> 3481ce3cd3a4c217b16d2b47b724468cbf82fd6c
{
	char *cr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] = c;

	return (cr);
}
