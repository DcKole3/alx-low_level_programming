#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - gets length of list_t struct
 * @h: head node
 * Return: number of elements in lknd list
 */
size_t list_len(const list_t *h)
{
int len = 0;
while (h != NULL)
{
len++;
h = h->next;
}
return (len);
}
