#include <stdio.h>
#include "lists.h"

/**
 * listint_len - the number of element in singly linked list
 * @h: integer
 * Return: returns the number of elements in a linked list. 
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
