#include "main.h"
/**
 * prints 10 times the alphabet, in lowercase, followed by a new line.
 * Return: Always 0 (success)
*/
void print_alphabet_x10(void)
{
int a;
int b;

for (b = 1; b <= 10; b++)
{
for (a = 97; a <= 122; a++)
{
_putchar(b);
}
_putchar("\n");
}
}
