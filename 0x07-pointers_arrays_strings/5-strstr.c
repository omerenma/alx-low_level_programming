#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: input string to search in
 * @needle: input string to locate into string haystack
 * Return: a pointer to the beginning of the located substrin, or Null
 */
char *_strstr(char *haystack, char *needle)
{
	char *startn = needle, *starth = haystack;

	while (*haystack)
	{
		starth = haystack;
		neddle = startn;
		while (*haystack == *needle)
		{
			haystack++;
			neddle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = start + 1;
	}
	return (NULL);
}
