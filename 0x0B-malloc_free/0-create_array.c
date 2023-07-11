#include "main.h"
#include <stdlib.h>
/**
 *  create_array - fuction that creates an array of chracters
 * initializes it a specific chareter
 * @size:print  array of characters
 * @c: character to be assigned
 * Description: create array of size size and assign char c
 * Return: Null if 0 and,pointer if succsess
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int j;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		str[j] = c;
	return (str);
}
