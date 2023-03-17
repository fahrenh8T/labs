#include <stdio.h>

/**
 * main - entry point
 * program prints all single digits numbers of base 10 starting from 0
 * return: always 0 (successful end)
*/

int main(void)
{
int num = 0;

while (num <= 9)
{

putchar(num + '0');
num++;
}

putchar('\n');

return (0);
}
