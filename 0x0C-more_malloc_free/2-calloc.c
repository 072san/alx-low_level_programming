#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: the array of elements
 * @size: the number of bytes
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *result;

if (nmemb == 0 || size == 0)
return (NULL);
result = calloc(nmemb, size);
if (result == NULL)
return (NULL);
else
return (result);
}
