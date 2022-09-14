#include "main.h"
/**
 * _isalpha - C  program that checks for alphabetic character
 * @c: integer
 * Description: The function return 1 if c is a letter, lowercase or upper
 * Return: Returns 1 or 0
 *
 *
 */
int _isalpha(int c)
{
	char lower, higher;
	int result = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (higher = 'A'; higher <= 'Z'; higher++)
		{
			if (c == lower || c == higher)
				result = 1;
		}
	}
	return (result);
}

