#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Prints from 0 to 10
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar('%d', i);
		i++;
	}
	putchar('\n');

	return (0);
}
