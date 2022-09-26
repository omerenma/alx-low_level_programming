#include "main.h"
/**
 * _strpbrk - function to search for any set of byte in a string
 * @s: input string
 * @accept: an input character to locate into string s
 * Return: returns a pointer to the byte in sthat matches one
 * of the bytes in accept or NULL if no such byte is found
 */
char *_strbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{

			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = start;
		s++;
	}
	return (NULL);
}
