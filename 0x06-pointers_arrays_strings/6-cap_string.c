#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string to be capitalize
 * Return: pointer to be capitalized string
*/
char *cap_string(char *s)
{
	int i, capitalize_next;

	for (i = 0, capitalize_next = 1; s[i] != '\0'; i++)
	{
		if (capitalize_next && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - 'a' + 'A';
		}
		capitalize_next = 0;

		switch (s[i])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			capitalize_next = 1;
			break;
			default:
			break;
		}
		
	}
	return (s);
}
