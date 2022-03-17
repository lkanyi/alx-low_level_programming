#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check the code for a digit (0 through 9)
 *
 * Return: 1 if c is a digit
 */
int _isdigit(int c)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
