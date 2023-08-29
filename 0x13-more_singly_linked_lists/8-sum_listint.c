#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - gets sum of linked list int
 * @head: head node of linked list
 * Return: sum of all data, or 0
 */
int sum_listint(listint_t *head)
{
listint_t *tmp;
int sum = 0;
tmp = head;
while (tmp != NULL)
{
sum += tmp->n;
tmp = tmp->next;
}
return (sum);
}
