#include <stdio.h>
/**
 * main - entry point
 * 
 * Return: Always 0.
*/

int main(void)
{
    putchar();
return (0);
}

void putchar(void)
{
	char ch[] = "_putchar\n";
	int i = 0;

	while (ch[i] != '\0')
	{
		putchar(ch[i]);
		i++;
	}

return (0);
}
