#include <stdio.h>
/**
 * main - entry point
 * 
 * Return: Always 0.
*/

int main(void)
{
    _putchar();
return (0);
}

void _putchar(void)
{
	char ch[] = "_putchar\n";
	int i = 0;

	while (ch[i] != '\0')
	{
		_putchar(ch[i]);
		i++;
	}

return (0);
}
