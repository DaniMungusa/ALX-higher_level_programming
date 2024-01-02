#ifndef LISTS_H
#define LISTS_H

#include <stdin.h>

/**
 *  struct listint_s - singly linked list
 *  @n: integer data
 *  @next: points to the next node
 *
 *  Description: singly linked list node structure
 *  for integers.
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} lsitint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif /* LISTS_H */
