#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: it is all natural number
 * Return: Always 0.
 */
void print_to_98(int n)
{
if (n >= 98)
{
for (n > 98)
printf("%d, ", n--);
printf("%d\n", n);
}
else
{
for (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
}
