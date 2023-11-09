#include "lists.h"

/**
 * insert_dnodeint_at_index - function inserting new node in doubly linked list
 *                            takes 3 arguments
 * @h: A pointer to the head of the dlistint_t list.(h)
 * @idx: represents position to which new node is to inserted
 * @n: int that will be used to store new node
 *
 * Return: If the function fails due to invali index
 *         returns  - NULL.
 *         Otherwise (address of the new node)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_node = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		current_node = current_node->next;
		if (current_node == NULL)
			return (NULL);
	}

	if (current_node->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = current_node;
	new->next = current_node->next;
	current_node->next->prev = new;
	current_node->next = new;

	return (new);
}
