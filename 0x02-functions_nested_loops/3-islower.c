#include "main.h"

/**
 * _islower - Checks if a given character is lower
 * @character : character to check the case of
 * Return: int
 */
int _islower(char character)
{
if (character < 'a' || character > 'z')
return (0);

return (1);
}
