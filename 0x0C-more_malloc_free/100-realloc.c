#include "main.h"
#include <stdlib.h>

/**
 * _realloc - allocates memory for an array, using malloc
 * @ptr: number of elements
 * @old_size: elements's size
 * @new_size: elements's size
 * Return: returns a pointer to an array of elements
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *array;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	array = malloc(new_size)
		return (NULL);
	for (i = 0; i < new_size; i++)
		*(array + (i * new_size)) = 0;
	return (array);
}
