#include "main.h"
/**
 * print_most_numbers -  checks digit (0 through 9).
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
int a;

for (a = 48; a < 58; a++)
{
if (a != 52)
{
_putchar(a);
}
}
_putchar('\n');

}
