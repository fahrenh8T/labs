#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: result pointer to resulting string
*/

char *_strcat(char *dest, char *src)
{
	int i = strlen(dest);

	while (*src != '\0')
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i++] = '\0';

	return (dest);
}
