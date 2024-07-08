#include "main.h"

/**
 * is_prime_recursive - helper function to find the prime number
 *
 * @n: the prime integer tester
 * @divisor: use to confirm if n is prime
 *
 * Return: 1 or prime number, 0 for false
 *
 */

int is_prime_recursive(int n, int divisor)
{
	if (n <= 1)
		return (0);
	if (divisor == 1)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_prime_recursive(n, divisor - 1));
}

/**
 * is_prime_number - find the prime number
 *
 * @n: the integer
 *
 * Return: 1 equal prime else  0
 *
 */

int is_prime_number(int n)
{
	return (is_prime_recursive(n, n - 1));
}

