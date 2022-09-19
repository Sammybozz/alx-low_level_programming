#include "main.h"

/**
 * _strlen - check
 * @a: length
 * @b: string
 * Return: void
 */

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; ++s)
		count++;

	return (count);
}
