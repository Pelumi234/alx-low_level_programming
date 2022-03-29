#include "main.h"

/**
 * _strspn - gets the length of prefix substring
 * @s: string to be searched
 * @accept: char array that string will be searched with
 *
 * Return: Number of bytes in initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bool;

	for (j = 0; *(accept + j) != '\0'; j++)
	{
		bool = 1;
		for (j = 0; *(accept + j) != '\0'; i++)
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
	}
	if (bool == 1)
		break;
	}
	return (i);

}


