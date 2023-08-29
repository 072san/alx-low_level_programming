#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @c: character in the string
 * @s: the string
 * Return: s or NULiL
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (*s == c)
return (s);
return (NULL);
}
