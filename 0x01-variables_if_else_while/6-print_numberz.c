#include <stdio.h>

/**
*main - entry point
*
*return: always 0 (success)
*/
int main(void)
{
int num = 0;

while (num <= 9)
{
putchar(num / 10 + '0');
putchar(num % 10 + '0');
num++;
}

putchar('\n');

return (0);
}
