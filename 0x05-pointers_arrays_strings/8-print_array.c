#include "main.h"
#include <stdio.h>
/**
 * print_array - print n elemente of an array of integer
 * @a: pointer to an int that will be changed
 * @n: return value
 *Return: Always 0.
 */
void print_array(int *a, int n)
{
int i;

i = 0;
while (i < n)
{
printf("%d", a[i]);

if (i < n - 1)
{
printf(", ");
}

i++;
}

printf("\n");
}
