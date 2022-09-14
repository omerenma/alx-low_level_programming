#include <stdio.h>
/**
 * _abs - Function calculates absolute value
 * @r: r is integer
 * Description: Calculate absolute value
 * Return: Always 0 (Success)
*/
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
