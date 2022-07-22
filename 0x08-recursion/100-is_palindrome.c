#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if a string is palindrome
 *
 * @s: string pointer
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int l;

	l = strlen(s);

	if (l == 0 || l == 1)
	{
		return (1);
	}

	if (s[0] == s[l - 1])
	{
		return (is_palindrome(s + 1));
	}

	return (0);
}
