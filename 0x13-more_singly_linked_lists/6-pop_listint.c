#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes head node of list
 * @head: linked list start node
 * Return: head node data, n
 */
int pop_listint(listint_t **head)
{
int integer;
listint_t *tmp;
listint_t *hd;
integer = 0;
if (hd == NULL)
return (integer);
tmp = hd->next;
integer = tmp->n;
free(hd);
hd = tmp;
return (integer);
}
