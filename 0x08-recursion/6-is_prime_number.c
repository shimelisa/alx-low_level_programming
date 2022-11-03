#include "main.h"

/**
* is_not_prime - check if a number is not prime or divisible
* @m: number to be checked
* @o: divisor
*
* Return: 0 (divisible) or 1 (not divisible)
*/
int is_not_prime(int m, int o)
{
	if (m % o == 0)
		return (0);
	if (o == m / 2)
		return (1);
	return (is_not_prime(m, o + 1));
}

/**
* is_prime_number - check if the number is prime
* @n: number to be checked
*
* Return: 0 (not prime) or 1 (prime)
*/
int is_prime_number(int n)
{
	int p = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (is_not_prime(n, p));
}
