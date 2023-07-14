#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this program is to know what is the sign of n.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		if (alph[i] == 'e' || alph[i] == 'q')
			continue;
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
