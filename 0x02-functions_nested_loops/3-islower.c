#include "main.h"

int _islower(int c)
{

	char lower_alpha = "abcdefghijklmnopqrstuvwxyz";

	int i;

	int result;

	for (i = 0; i < 26; i++)
	{
		if (lower_alpha[i] == c)
		{
			result = 1;
		}
		else
		{
			result = 0;
		}
	}

	return (result);
}

