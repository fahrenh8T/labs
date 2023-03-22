#include "main.h"
/**
 * _isapha -shows 1 if input is lowercase or uppercase letter. 0 if otherwise
 * @c: the character in ASCII table
 * Return: 1 for letter. 0 if otherwise.
*/
int _isalpha(int c)
{
if (c >= 65 && c <= 90) | (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
