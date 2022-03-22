#include <stdio.h>

/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * @n: number imputted by user and it is printed
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = 0; n <= 97; n++)
			printf("%d", n);
	}
	else
		for (n = 0; n > 98; n--)
			printf("%d", n);
	printf("98\n");
}
