#include "main.h"

/**
 * _print_rev_recursion - the function that can prints a string in reverse
 *
 * @s: string to receive
 *
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
		return;
}
