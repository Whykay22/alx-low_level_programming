#include "main.h"

/**
 * print_alphabet - Print each letter of the alphabet
 * Return: void
 */
void print_alphabet(void)
{
char output[27] = "abcdefghijklmnopqrstuvwxyz\n";
int i = 0;

while (i < 27)
{
_putchar(output[i]);
i++;
}
}
