#include "main.h"
/**
 * _puts_recursion - the function that can prints a string
 * @s: Recieved string
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	-puts_recursion(s);
}
