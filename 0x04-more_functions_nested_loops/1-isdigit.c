#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function that prints the sign of a number.
 *
 @c: is a digit
 *
 * Return: 1 if c is a digit, 0otherwiswe
 */

int _isdigit(int c)
{
    if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
