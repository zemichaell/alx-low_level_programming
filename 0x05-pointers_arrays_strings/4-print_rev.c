#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: print string
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
int i = 0;

while (*(s + i) != '\0')
i += 1;
i -=1;
while (i >= 0)
{
_putchar(*(s + i));
i--;
}
_putchar('\n');

}
