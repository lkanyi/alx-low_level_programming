#include "main.h"
#include <stdio.h>

/**
 * main- concentarte on two strings
 *
 * Return: Always 0.
 */
int char *_strcat(char *dest, char *src);
{
	char s1[98] = "Hello";
	char s2[] = "Woeld!\n";
	char *ptr;

	printf("%s\n", s1);
	printf("%s", s2);
	ptr = _strcat(s1, s2);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);
	return (0)
}

