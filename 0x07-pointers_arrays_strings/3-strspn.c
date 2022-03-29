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
	int i;
	int j;
	int c;

	i = 0;
	c = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (c);

}
	/**
	 * for (j = 0; *(accept + j) != '\0'; j++)
	 * {
	 * bool = 1;
	 * for (j = 0; *(accept + j) != '\0'; i++)
	 * {
	 * if (*(s + i) == *(accept + j))
	 * {
	 * bool = 0;
	 * break;
	 * }
	 * }
	 * if (bool == 1)
	 * break;
	 * }
	 * return (i);
	 */
