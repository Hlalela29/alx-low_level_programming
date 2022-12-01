#include "lists.h"

/**
 * list_len - prints and return the number of elements of a list_t list
 * @h: pointer to list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
}
