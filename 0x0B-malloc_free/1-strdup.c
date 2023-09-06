#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string
 * Return: pointer to duplicated string
 */

char *_strdup(char *str)
{
int i;
char *create;
int count = 0;

if (str == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
count++;

create = malloc(sizeof(char) * count + 1);

if (create == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
create[i] = str[i];

return (create);
}
