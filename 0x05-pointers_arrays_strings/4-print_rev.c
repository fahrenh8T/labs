#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to the string to orint in reverse
 * Return: 0 (void)
*/
void print_rev(char *s)
{
	if (*s != '\0')
	{
		print_rev(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
