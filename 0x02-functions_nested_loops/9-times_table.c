#include "main.h"
/**
 * times_table - pirint the 9 times table
 * Return: Always 0.
 */
void  times_table(void)
{
int n;
int multiple;
int prod;

for (n = 0; n <= 9; n++)
{
_putchar('0');

for (multiple = 1; multiple <= 9; multiple++)
{
_putchar(',');
_putchar(' ');

prod = n * multiple;

if (prod <= 9)
_putchar(' ');
else
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
