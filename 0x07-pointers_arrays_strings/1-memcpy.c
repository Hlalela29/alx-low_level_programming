#include "main.h"

/**
 * _memcpy - copies @n bytes
 * @dest: a pointer to the memory area
 * @src: the source buffer
 * @n: the number of bytes
 * Return: A pointer tp thr destination @dest
 */
void *_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
	   dest[i] = src[i];
	}

	return (dest);
}
