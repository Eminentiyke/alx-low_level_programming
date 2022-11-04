#include "main.h"
/**
 * length - helps do it
 * @s: string
 * Return: string length
 */
int length(char *s)
{
	int i = 0;

	if (*s)
	{
		i = i + length(s + 1);
		return (i += 1);
	}
	return (0);
}
/**
 * helper2 - helps more
 * @i: integer i
 * @s: string
 * Return: int value
 */
int is_palindrome(char *s)
{
	int i = 1;

	return (helper2(i, s));
}

