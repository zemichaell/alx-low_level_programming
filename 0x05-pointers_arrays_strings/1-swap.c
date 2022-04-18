#include main.h
/**
 * swap_int - it is the two integer values
 * @a: pointer variable
 * @b: second pointer variable
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int n;

n = *a;
*a = *b;
*b = n;
}
