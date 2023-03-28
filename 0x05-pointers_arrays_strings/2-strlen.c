#include "main.h"
/**
 * _strlen -return the length of a string
 * @s: pointer of the string
 * Return: 0
*/
int _strlen(char *s)
{
	int len = 0;
	
	while (*s !='\0')
	{
		len++;
		s++;
	}
	return len;
}
