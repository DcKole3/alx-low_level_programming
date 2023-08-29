#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * listint_len - gets length of linked list
 * @h: struct listint_t type
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t len = 0;
while (h != NULL)
{
len++;
h = h->next;
}
return (len);
}
