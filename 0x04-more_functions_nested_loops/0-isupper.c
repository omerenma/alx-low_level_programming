#include "main.h"
/**
 * _isupper - A function that checks upperccase
 * @c: input char
 * Return: 1 if c is uppercase
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
