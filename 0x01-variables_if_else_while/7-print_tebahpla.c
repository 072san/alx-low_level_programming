#include <stdio.h>

/**
 * main - taking this as the main
 *
 * Return: will be 0 when it is sucessfull
 */

int main(void)
{
char i;

for (i = 'z' ; i >= 'a' ; i--)
putchar(i);
putchar('\n');
return (0);
}
