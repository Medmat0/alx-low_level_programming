#include "main.h"

/**
 * rot13 - the function to uncode a string using rot13.
 * @str: the string.
 *
 * Return: return the uncode string;
 */
char *rot13(char *str)
{
	int i = 0, j;
	char ch[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(str + i) != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (*(str + i) == ch[j])
			{
				*(str + i) = rot13[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
