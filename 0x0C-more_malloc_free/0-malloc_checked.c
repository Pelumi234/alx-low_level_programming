#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc.
 * Description: If malloc fails, terminate process with status 98.
 * @b: unsigned int memory size to allocate
 * Return: void pointer to memory space allocated
*/

void *malloc_checked(unsigned int b)
{
		char *p;

		p = malloc(b);
		if (p == NULL)
			exit(98);
		return (p);

}

