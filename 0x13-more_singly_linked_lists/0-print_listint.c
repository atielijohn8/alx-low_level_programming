#include "lists.h"

/**
 * print_listint - func that prints elements of listint_t
 * @h: head list
 *
 * Return: NO. nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *k = h;
	size_t count = 0;

	while (k != NULL)
	{
		printf("%d\n", k->n);
		count += 1;
		k = k->next;
	}
	return (count);
}
