#include "lists.h"
/**
 * add_nodeint - adds a node at list start
 * @head: start of node
 * @n: value of new node
 * Return: address of the new element, or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
/*1st n is from struct*/
/*2nd n is new int*/
new->next = *head;
*head = new;
return (*head);
}
