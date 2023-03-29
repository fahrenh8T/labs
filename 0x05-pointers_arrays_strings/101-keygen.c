#include "main.h"

#define PASSWORD_LENGTH 100
#define CHECKSUM 2772

/**
 * main - generates random valid passwords
 * Return: 0
*/

int main(void)
{
	char passwd[PASSWORD_LENGTH + 1];
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	srand(time(NULL));

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		passwd[i] = charset[rand() % (sizeof(charset) - 1)];
	}
	passwd[PASSWORD_LENGTH] = '\0';

	printf("Generated Password: %s\n", passwd);

	return (0);
}
