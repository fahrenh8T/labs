#include "main.h"
/**
 * is_palindrome_helper - finding palindrome
 * @s: string
 * @i: integer
 *
 * Return: returns 1 if a string is a palindrome and 0 if not
*/
int is_palindrome_helper(char *s, int i)
{
	int lngth;

	lngth = strlen(s);

	if (*s == '\0')
	{
		return (1);
	}
	else if (*s == s[lngth - i])
	{
		return (is_palindrome_helper(s + 1, i + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome -checks is string is a palindrome
 * @s: string
 *
 * Return: returns 1 if a string is a palindrome and 0 if not
*/
int is_palindrome(char *s)
{
	return (is_palindrome_helper(s, 1));
}
