#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: input number
 *
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (getNumPrim(n, 2));
}

/**
 * getNumPrim - function that gets if num is 0 or 1
 * @num: input number
 * @i: Counter variable
 *
 * Return: Always 0.
 */
int getNumPrim(int num, int i)
{
	if (num == i)
		return (1);
	if (num % i == 0)
		return (0);
	return (getNumPrim(num, i + 1));
}
