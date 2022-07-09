#include "main.c"

/**
 * _isdigit- digit checking function
 *
 * @c: int
 *
 * Return: 1 or 0
*/

int _isdigit(int c)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if c == i
			return (1);
		else
			return (0);
	}
}
