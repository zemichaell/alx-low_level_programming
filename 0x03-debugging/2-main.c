#include "main.h"
/**
 * largest_number - return the largest of 3 numbers
 * @a: the first input integer number
 * @b: the second inpute integer number
 * @c: the third input integer number
 * Return: the largest number from the three input
 */

int largest_number(int a, int b, int c)
{
int largest;

if (a >= b && a >= c)
{
largest = a;
}
else if (b >= a && b >= c)
{
largest = b;
}
else
{
largest = c;
}

return (largest);
}
