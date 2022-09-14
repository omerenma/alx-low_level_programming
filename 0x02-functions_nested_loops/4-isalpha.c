#include "main.h"
/**
 * _isalpha - C  program that checks for alphabetic character
 * @c: integer
 * Description: The function return 1 if c is a letter, lowercase or uppercase else 0
 * Return: Returns 1 or 0
 *
 *
 */
int _isalpha(int c)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == c)
			return (1);
	}
	return (0);
}

