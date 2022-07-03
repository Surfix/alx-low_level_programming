#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: prints the numbers of base 16 in lower case
 *
 * Return: 0
 */

int main(void)
{
	char n[] = "0123456789abcdef";

	int i = 0;

	while (i < 16)
	{
		putchar(n[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
