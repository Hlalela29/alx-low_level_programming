#include "main.h"

/**
 * _memcpy - copies @n bytes
 * @dest: a pointer to the memory area
 * @src: the source buffer
 * @n: the number of bytes
 * Return: A pointer tp thr destination @dest
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = src;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)

		destination[index] = source[index];

		return (dest);
}
