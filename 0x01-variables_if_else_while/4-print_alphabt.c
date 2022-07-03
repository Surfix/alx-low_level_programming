#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints alphabets in lower case
 *
 * Return: 0
 */

int main(void)
{
	char alpha[] = "abcdfghijklmnoprstuvwxyz";

	int i;

	for (i = 0; i < 24; i++)
		putchar(alpha[i]);
	putchar('\n');
	return (0);

}
