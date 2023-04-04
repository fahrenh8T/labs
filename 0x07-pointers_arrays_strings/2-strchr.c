#include "main.h"
/**
 *_strchr - locates first occurrence a character in a string
 *@s: pointer to the null-terminated string to be searched
 *@c: character to be located
 *
 * Return: s or NULL
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
