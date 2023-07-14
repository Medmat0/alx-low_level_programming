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
	char l_alp[26] = "abcdefghijklmnopqrstuvwxyz";
	char u_alp[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i < 26; i++)
		putchar(l_alp[i]);
	for (i = 0; i < 26; i++)
		putchar(u_alp[i]);
	putchar('\n');
	return (0);
}
