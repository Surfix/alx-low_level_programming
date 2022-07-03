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
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	int i;

	for (i = 0; i < 26; i++)
		putchar(alpha[i]);
	putchar('\n');
	return (0);

}
