#include "main.h"

/**
 * square_finder - helper function
 *
 * @sq_src: the root integer
 * @result: the squared number
 *
 * Return: result or -1
 *
 */

int square_finder(int sq_src, int result)
{
	if (sq_src * sq_src == result)
		return (sq_src);
	if (sq_src * sq_src > result)
		return (-1);
	return (square_finder(sq_src + 1, result));
}

/**
 * _sqrt_recursion - find the result of the square root
 *
 *
 * @n: integer number
 *
 * Return: square root or -1
 *
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);
	else if (n < 0 || n == 1)
		return (n);
	return (square_finder(1, n));
}
