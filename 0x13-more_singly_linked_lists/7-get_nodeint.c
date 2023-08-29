#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: lead node of linked list
 * @index: nth node to get
 * Return: node at index, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int len = 0;
listint_t *tmp;
tmp = head;
while (len != index && tmp != NULL)
{
len++;
tmp = tmp->next;
}
if (len != index)
{
return (NULL);
}
return (tmp);
}
