#include "main.h"

/**
 * print_number - print numbers 0 to 9
 *
 * Return: none
 */

void print_number(void)
{
	char i;

	for (i = '0'; i < '10'; i++)
		_putchar(i);
	_putchar('\n');
}
