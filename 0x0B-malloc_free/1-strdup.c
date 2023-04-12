#include "main.h"
#include <stdlib.h>
#include<string.h>
/**
 * _strdup - creates a duplicate of a string
 * @str: input string
 *
 * Return: A pointer, or  NULL fi memory allocation fails
*/
char *_strdup(char *str)
{
	char *s;
	size_t len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);

	s = (char *) malloc((len + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	strcpy(s, str);

	return (s);
}
