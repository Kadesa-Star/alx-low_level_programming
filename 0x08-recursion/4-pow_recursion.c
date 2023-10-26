#include "main.h"
/**
 * _pow_recursion - the power function
 * @x: base integer
 * @y: power integer
 *
 * Return: 0 (success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
