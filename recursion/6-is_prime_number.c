#include "main.h"

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if @n is prime, otherwise 0
 */
int is_prime_number(int n)
{
	return (prime_helper(n, 2));
}

/**
 * prime_helper - Helper function to check if a number is prime
 * @n: The number to check
 * @divisor: The current divisor
 *
 * Return: 1 if @n is prime, otherwise 0
 */
int prime_helper(int n, int divisor)
{
	if (n <= 1)
		return (0);
	if (divisor > n / 2)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (prime_helper(n, divisor + 1));
}
