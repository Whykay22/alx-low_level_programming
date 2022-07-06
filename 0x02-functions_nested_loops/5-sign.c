#include <stdio.h>
#include "main.h"

/**
 * print_sign- Checks the sign of a given integer
 * @n : integer to check
 * Return: int
 */
int print_sign(int n)
{
if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('+');
return (1);
}
}
