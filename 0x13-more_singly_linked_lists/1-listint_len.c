#include "lists.h"

/**
 * listint_len - func returning NO. elements
 * @h: head list
 *
 * Return: NO. elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *k = h;
	size_t count = 0;

	while (k != NULL)
	{
		count += 1;
		k = k->next;
	}
	return (count);
}
