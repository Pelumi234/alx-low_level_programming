#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: locate a substring
 * @needle: string substring to locate
 * Return: Pointer to beginning of substring, or NULL if string is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}


	return (NULL);
}
