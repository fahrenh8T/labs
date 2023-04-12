#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: first input string
 * @s2: second input string
 *
 * Return: a pointer to concatenated string or NULL if failed
*/
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	size_t len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	ptr = (char *) malloc((len1 + len2 + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		ptr[len1 + j] = s2[j];
	}

	ptr[len1 + len2] = '\0';

	return (ptr);
}
