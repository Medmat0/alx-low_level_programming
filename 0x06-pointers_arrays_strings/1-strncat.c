#include "main.h"
#include <stdio.h>
/**
 * _strncat - the concatnate function.
 *
 * @dest: first string.
 * @src: second string.
 * @n: number of chars.
 *
 * Return: String.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (i >= 0)
	{
		if (*(dest + i) == '\0')
		{
			for (j = 0; j < n && *(src + j) != '\0'; j++)
			{
				*(dest + i) = *(src + j);
				i++;
			}
			break;
		}
		i++;
	}
	return (dest);
}
