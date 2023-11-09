#include "lists.h"

/**
 * delete_dnodeint_at_index - removes a node from a dlistint_t
 *                            at a given index position
 * @head: pointer to the head of the dlistint_t
 * @index: The index to the node to be deleted.
 *
 * Return:success (- 1).
 *         Otherwise ( -1).
 * 
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current _node = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (current _node == NULL)
			return (-1);
		current _node = current _node->next;
	}

	if (current _node == *head)
	{
		*head = current _node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		current _node->prev->next = current _node->next;
		if (current _node->next != NULL)
			current _node->next->prev = current _node->prev;
	}

	free(current _node);
	return (1);
}
