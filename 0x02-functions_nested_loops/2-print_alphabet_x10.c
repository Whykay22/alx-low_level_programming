#include "main.h"

/**
 * print_alphabet_x10 - Print each letter of the alphabet
 * Return: void
 */
void print_alphabet_x10(void)
{
char output[27] = "abcdefghijklmnopqrstuvwxyz\n";
int i = 0;
int j = 0;

for (j = 0; j < 10; j++)
{
while (i < 27)
{
_putchar(output[i]);
i++;
}
i = 0;
}
}
