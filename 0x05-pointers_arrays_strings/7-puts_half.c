#include "main.h"

/**
 * puts_half - void
 *
 * @str: string
 *
 */

void puts_half(char *str)
{
	int len, n, i;

	len = 0;

	while (str[len] != '\0)
	{
		len++;
	}


	{
		for (i = 0; i < len; i +=2)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
