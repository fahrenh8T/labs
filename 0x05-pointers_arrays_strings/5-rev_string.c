#include "main.h"
/**
 * rev_string -reverses a string
 * @s: pointer to the string to reverse
 * Return: 0
*/
void rev_string(char *s)
{
	int i, j;
	char tmp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	j = i - 1;
	i = 0;
	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
