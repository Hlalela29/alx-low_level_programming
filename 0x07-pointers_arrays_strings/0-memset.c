#include "main.h"

/**
 * _memset - files memory with a constant byte pointed to by @s with the consta
 * @s: memory area
 * @b: the byte
 * @n: number of bytes to fill
 * description _memset: over there
 * Return: pointer to @s
 */
char *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
	{
		memory[index] = value;

		return (memory);
	}
}
