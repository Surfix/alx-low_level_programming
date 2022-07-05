#include "main.h"


/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int j;

	int i;

	char alpha[] = "abcdefghijklmnopqrstuvwxyz\n";

	for (j = 0; j < 10; j++)
		for (i = 0; i < 26; i++)
			_putchar(alpha[i]);
	_putchar('\n');
}
