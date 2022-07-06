#include "main.h"

/**
 * _isalpha- Checks if a given character is alpha
 * @character : character to check if alphabetical
 * Return: int
 */
int _isalpha(char character)
{
if (character < 'a' || character > 'z')
if (character < 'A' || character > 'Z')
return (0);

return (1);
}
