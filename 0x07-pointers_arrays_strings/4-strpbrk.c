#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: the string
 * @accept: the bytes
 * Return: accept or NULL
 */

char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
const char *i = accept;

while (*i != '\0')
{
if (*s == *i)
return (s);
i++;
}
s++;
}
return (NULL);
}
