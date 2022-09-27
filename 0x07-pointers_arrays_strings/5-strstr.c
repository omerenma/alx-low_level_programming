#include "main.h"
#include <stdio.h>
/**
 * _strstr - a function that locates a substring
 * @haystack: input string to search in
 * @needle: input string to locate into string haystack
 * Return: a pointer to the beginning of the located substrin, or Null
*/
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && **haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (n);
		haystack++;
	}
	return ('\0');
}
