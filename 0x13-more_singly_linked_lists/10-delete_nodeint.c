#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index
 * @head: head of linked list
 * @index: index of node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp;
listint_t *node_out;
unsigned int count = 0;
tmp = *head;
if (*head == NULL)
return (-1);
if (index == 0)
{
tmp = tmp->next;
free(*head);
*head = tmp;
return (1);
}
else
{
while (tmp != NULL && count != index - 1)
{
count++;
tmp = tmp->next;
}
if (count != index - 1)
return (-1);
node_out = tmp->next;
tmp->next = tmp->next->next;
free(node_out);
return (1);
}
}
