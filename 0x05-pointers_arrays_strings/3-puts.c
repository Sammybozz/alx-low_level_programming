#include "main.h"

/**
 * _puts - function that print string
 * Return: Always 0
 */

void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str + 0);
		str++;

	_putchar('\n');
}
