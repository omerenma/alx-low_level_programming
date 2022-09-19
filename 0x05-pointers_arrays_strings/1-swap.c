#include "main.h"
/**
 * 1-sawp - Function takes 2 integers and wsaps them
 * @a: integesr a
 * @b: integers b
 * Return: Nothing
 *
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
