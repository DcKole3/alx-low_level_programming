#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
int _putchar(char c);
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
  char *str;
  unsigned int len;
  struct list_s *next;
}list_t;
/**
 * print_list -
 * prints elements of a list
 */
size_t print_list(const list_t *h)
/**
 * list_len -
 * gets no of elements in a linked list
 */
size_t list_len(const list_t *h)
/**
 * add_node  -
 * adds new node at list start
 */
list_t *add_node(list_t **head, const char *str)
/**
 * add_node_end  -
 * adds new node at list end
 */
list_t *add_node_end(list_t **head, const char *str)
/**
 * free_list -
 * frees a linked list
 */
void free_list(list_t *head)
#endif
