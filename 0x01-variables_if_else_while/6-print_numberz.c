#include <stdio.h>

/**
*main - entry point
*program uses ASCII code
*return: always 0 (success)
*/
int main(void)
{
int num = 48;

while (num <= 57)
{
putchar(num);
num++;
}

putchar('\n');

return (0);
}
