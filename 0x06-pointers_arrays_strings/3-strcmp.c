#include "main.h"

/**
 * _strcmp - the function .
 *
 * @s1: 1st string.
 * @s2: 2nd string.
 * Return: return value.
 */
int _strcmp(char *s1, char *s2)
{
	int fs = 0, ss = 0, i = 0, cmp, g;

	while (*(s1 + fs) != '\0')
		fs++;
	while (*(s2 + ss) != '\0')
		ss++;
	if (fs > ss)
		g = fs;
	else
		g = ss;
	while (i < g)
	{
		if (*(s1 + i) < *(s2 + i))
		{
			cmp = *(s1 + i) - *(s2 + i);
			break;
		}
		else if (*(s1 + i) > *(s2 + i))
		{
			cmp = *(s1 + i) - *(s2 + i);
			break;
		}
		else
			cmp = 0;
		i++;
	}
	return (cmp);
}
