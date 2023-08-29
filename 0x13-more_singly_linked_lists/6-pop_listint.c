#include "lists.h"
/**
 * pop_listint - deletes head node of list
 * @head: linked list start node
 * Return: head node data, n
 */
int pop_listint(listint_t **head)
{
int integer;
listint_t *tmp;
integer = 0;
if (*head == NULL)
return (integer);
tmp = *head;
integer = tmp->n;
free(*head);
*head = tmp->next;
return (integer);
}
