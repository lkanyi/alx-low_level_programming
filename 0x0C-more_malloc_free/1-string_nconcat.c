#include "main.h"

/**
<<<<<<< HEAD
 * *string_nconcat - concatenates two strings
 * @s1, @s2 - pointer char
 * @n - unsigned int
 * Return: Always 0.
 * z
 * NULL
=======
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
>>>>>>> 0e4c20272739c1dbef6e4a5bb713ee300a453a22
 */
int main(int argc, char *argv[])
{
unsigned long mul;
int i, j;
	if (argc != 3)
	{ printf("Error\n");
	exit(98); }
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{  printf("Error\n");
			exit(98); }
		}

	}
	mul = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", mul);
return (0);
}
