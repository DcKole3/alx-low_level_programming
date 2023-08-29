#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
int _putchar(char c);
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
  int n;
  struct listint_s *next;
}listint_t;
/**
 * print_listint -
 * prints all elements of a list
 */
size_t print_listint(const listint_t *h);
/**
 * listint_len -
 * gets no of elements in a linked list
 */
size_t listint_len(const listint_t *h);
/**
 * add_nodeint -
 * adds new node at list beginning
 */
listint_t *add_nodeint(listint_t **head, const int n);
/**
 * add_nodeint_end -
 * adds new node at list end
 */
listint_t *add_nodeint_end(listint_t **head, const int n);
/**
 * free_listint -
 * frees a linked list
 */
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
#endif
