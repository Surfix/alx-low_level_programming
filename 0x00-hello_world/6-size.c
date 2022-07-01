#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print size of various types
 *
 * Return: 0
 */

int main(void)
{
	printf("size of a char: %d bytes\n", (int) sizeof(char));
	printf("size of an int: %d bytes\n", (int) sizeof(int));
	printf("size of a long: %d bytes\n", (int) sizeof(long));
	printf("size of a long long: %d bytes\n", (int) sizeof(long long));
	printf("size of a float: %d bytes\n", (int) sizeof(float));
	return (0);
}
