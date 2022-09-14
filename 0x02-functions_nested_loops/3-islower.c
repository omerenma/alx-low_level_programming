#include "main.h"
/**
 * _islower - C program that checks for lowercase character
 * @c: integer
 * Description: returns 1 if c is lowercase else 0
 * Return: If lowercase or uppercase 1 else 0
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}
	return (lower);
}
