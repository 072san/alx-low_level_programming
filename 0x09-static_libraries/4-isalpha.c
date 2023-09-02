#include "main.h"

/**
 * _isalpha - check for alphabet character
 * @c: parameter to be checked
 * Return: this returns to 1 or 0:
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
