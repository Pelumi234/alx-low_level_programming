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

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (bhaystack);
		haystack = bhaystack + 1;
	}

	return (0);
}
