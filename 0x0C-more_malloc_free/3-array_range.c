#include "main.h"

/**
 * array_range -  a function that creates an array of integers
 * @min: the minimum
 * @max: the maximum
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
int i;
int size;
int *result;

if (min > max)
return (NULL);
size = (max - min) + 1;
result = malloc(sizeof(int) * size);
if (result == NULL)
return (NULL);
for (i = 0; min <= max; i++)
result[i] = min++;
return (result);
}
