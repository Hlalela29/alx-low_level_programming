#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of the program
 * @argc: count arguments
 * @argv: Arguments
 *
 * Return: Always 0 success
 */
int main(int argc, char **argv)
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", *argv++);
	return (0);
}
