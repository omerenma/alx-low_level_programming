#include "main.h"
/**
 * print_array - print n ele of array
 * @a: input array
 * @n: input array
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n')
}
