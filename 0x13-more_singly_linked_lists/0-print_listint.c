#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements in the list
 *
 * @h: Pointer to listint structure
 *
 * Return: Number of nodes in the structure
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}	
