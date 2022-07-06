#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n : integer to check
 * Return: int
 */
int _abs(int n)
{
if (n == 0)
{
return (0);
}
else if (n < 0)
{
return (-1 * n);
}
else
{
return (n);
}
}
