#include "lists.h"

/**
 * print_listint - Check code
 * @h: linked list to print
 *
 * Return: nodes count
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
