#include "main.h"
 /**
  * _print_rev_recursion - the function that prints a string in reverse
  * @s: string to receive
  *
  * Return: Always 0.
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
