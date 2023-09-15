#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @separator: string to be printed beteween numbers
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list arg;

va_start(arg, n)
for (i = 0; i < n; i++)
{
if (separator i = NULL)
{
printf("%d", va_arg(arg, int));
if (i i= n - 1)
printf("%s", separator);
}
else
printf("%d", va_arg(arg, int));
}
putchar('\n')
va_end(arg);
}
