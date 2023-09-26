#include "lists.h"

/**
 * pop_listint -a function deletes the head node of a linked list
 * @head: pointer to first element in the linked list
 * Return: the head node’s data (n)
 * or if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
listint_t *node;
int number;

if (!head || !*head)
return (0);

number = (*head)->n;
node = (*head)->next;
free(*head);
*head = node;

return (number);
}
