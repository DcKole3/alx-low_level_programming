#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - prints int
 * of linked list
 * @h: struct listint_t type
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t len = 0;
while (h != NULL)
{
printf("%d\n", h->n);
len++;
h = h->next;
}
return (len);
}
