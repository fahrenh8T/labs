#include <stdio.h>

/**
 * main - entry point
 * program starts with the first alphabet and loops from a-z
 * skips 'e' and 'q'
 * retun: always 0 (success)
*/
int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
letter++;
}

putchar('\n');

return (0);
}
