#include "lists.h"

/**
 * add_nodeint_end - func adding new node at list end
 * @head: head list of pointer
 * @n: cont NO.
 *
 * Return: new adress of the node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *k = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	else
		return (NULL);
	if (k != NULL)
	{
		while (k->next != NULL)
			k = k->next;
		k->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
