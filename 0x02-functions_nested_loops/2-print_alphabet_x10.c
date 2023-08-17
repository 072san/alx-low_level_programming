#include "main.h"

/**
 * print_alphabet_x10 - a function that will print the alphabet
 * Return: this returns to 0:
 */

void print_alphabet_x10(void)
{
int i;
char h;

for (i = 0 ; i < 10 ; i++)
{
for (h = 'a' ; h <= 'z' ; h++)
_putchar(h);
_putchar('\n');
}
}
