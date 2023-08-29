#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at given position
 * @head: pointer to head node address
 * @idx: position of node for new data
 * @n: int of new data
 * Return: address of the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head,
				   unsigned int idx, int n)
{
unsigned int pos = 0;
listint_t *tmp; 
listint_t *new;
if (head == NULL)
return (NULL);
tmp = *head;
while (tmp != NULL && pos != idx - 1)
{
tmp = tmp->next;
pos++;
}
if (pos != idx - 1 && idx != 0)
return (NULL);
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx != 0)
{
new->next = tmp->next;
tmp->next = new;
}
else
{
new->next = *head;
*head = new;
}
return (new);
}
