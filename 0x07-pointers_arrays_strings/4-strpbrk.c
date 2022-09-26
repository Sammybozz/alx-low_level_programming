#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any os a set bytes
 * @s: string to search
 * @accept: stringcontaining the bytes to look for
 *
 * return: pointer to the byte to s that matches one of the bytes in accept
 * ot NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
