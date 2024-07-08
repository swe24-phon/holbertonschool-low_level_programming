#include "main.h"

/**
 * _pow_recursion - find the result of x to the power of y
 *
 * @x: integer number
 * @y: integer number
 *
 * Return: x to power of y or -1
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x * 1);
	else
		return (x * _pow_recursion(x, y - 1));
}
