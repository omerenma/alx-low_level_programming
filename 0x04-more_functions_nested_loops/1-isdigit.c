#include "main.h"
/**
 * _isdigit - prints a digit from 0-9
 * @c: inout int
 * Return: 1 if digit or 0
 */
int _isdigit(int c)
{
	char i = '0';
	int isdigit =0;

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break
		}
	}

	return (isdigit);
}

