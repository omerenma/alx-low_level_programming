#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - a function that prints a chessbpard
 * @a: an arry input to print
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	j = 0;

	while (i < 64)
	{
		if (i % 8 == 0 && i !- 0)
		{
			j = i;
			_putchar('\n');
		}

		_putchar(a[i / 8][i -j]);
		i++;
	}
	_putchar('\n');

}
