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
	char *startn = needle, *starth - haystack;

	while (*haystack)
	{
		starth = haystack;
		needle = startn;
		
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\n')
			return (haystack);
		haystack = startn + 1;

	}
	return (NULL);
}
