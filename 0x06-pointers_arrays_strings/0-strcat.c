#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: input string
 * @src: input string
 * Return: Apointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
