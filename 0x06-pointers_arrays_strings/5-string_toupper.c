#include "main.h"
/**
 * string_toupper - function change lowercase to uppercase
 * @s: input string
 * Return: char pointer to conver string
 */ 
char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && **s <= 'z')
			*s -= 32;
		s++;
	}
	return (start);
}
