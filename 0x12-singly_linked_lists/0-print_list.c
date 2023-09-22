#include <stdio.h>
#include "lists.h"

/**
 * print_list- prints all the elements that linked to a list
 * @h: pointer to the list_t print
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
size_t f = 0;

while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
f++;
}

return (f);
}

