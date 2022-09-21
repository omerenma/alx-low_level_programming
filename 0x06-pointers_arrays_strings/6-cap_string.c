#include "main.h"
int check_seperator(char c);
/**
 * string_toupper - a that captilizesall words to a string
 * @s: input string
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int = 0;

	while (s[i])
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;

		if (check_seperator(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			s[i + 1] -= 32;
		i++;

	}
	return (s);
}

/**
 * check_seperator - Sepeprates words, space,tabulation
 * @c: input character
 * Return: 1 if seperator, 0 otherwise
 */
int check_seperator(char c)
{
	int i = 0;
	char seperators[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(' ,')', '{', '}'};
	for (; i < 13; i++)
	{
		if (c == seperators[s])
			return (1);

	}
	return (0);
}
