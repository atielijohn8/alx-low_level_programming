#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - func adding new node at the begging of list _t
 * @head: double pointer to  list _t list
 * @str: new string to adding the node
 * Return: the address of the new element, or NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
