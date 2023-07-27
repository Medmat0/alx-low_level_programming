#include "holberton.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 *
 * Return: pointer to dest
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = 0, len2 = 0, sum, result_len, digit1, digit2, carry = 0;

    while (*(n1 + len1) != '\0')
        len1++;
    while (*(n2 + len2) != '\0')
        len2++;

    if (len1 >= len2)
        result_len = len1;
    else
        result_len = len2;

    if (size_r <= result_len + 1)
        return (0);

    r[result_len + 1] = '\0';
    len1--, len2--, size_r--;
    digit1 = *(n1 + len1) - 48, digit2 = *(n2 + len2) - 48;

    while (result_len >= 0)
    {
        sum = digit1 + digit2 + carry;
        if (sum >= 10)
            carry = sum / 10;
        else
            carry = 0;
        if (sum > 0)
            *(r + result_len) = (sum % 10) + 48;
        else
            *(r + result_len) = '0';
        if (len1 > 0)
            len1--, digit1 = *(n1 + len1) - 48;
        else
            digit1 = 0;
        if (len2 > 0)
            len2--, digit2 = *(n2 + len2) - 48;
        else
            digit2 = 0;
        result_len--, size_r--;
    }

    if (*(r) == '0')
        return (r + 1);
    else
        return (r);
}
