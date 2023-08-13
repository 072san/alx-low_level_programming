#include <stdio.h>

/**
 * main - taking this as the main
 *
 * Return: will be 0 when it is sucessfull
 */

int main(void)
{
int i;
char j;

for (i = 0 ; i < 10 ; i++)
putchar(i + '0');
for (j = 'a' ; j <= 'f' ; j++)
putchar(j);
putchar('\n');
return (0);
}
