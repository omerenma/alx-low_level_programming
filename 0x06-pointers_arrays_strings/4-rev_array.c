#include "main.h"
/**
 * reverse_array - functions that reverses array
 * @a: input array
 * @n: number of array ele
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
