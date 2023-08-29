#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a list and
 * puts head as null
 * @head: linked list and head
 *
 */
void free_listint2(listint_t **head)
{
listint_t *tmp;
listint_t *hd = *head;
if (head == NULL)
return;
while (hd != NULL)
{
tmp = hd->next;
free(hd);
hd = tmp;
}
*head = NULL;
}
