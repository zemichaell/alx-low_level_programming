#include "main.h"
/**
 * reverse_array - reverses the content of an array of integer
 * @a: array integer
 * @n: number oe element of the array
 * Return: void
 */

void reverese_array(int *a, int n)

{
	int *start_c, *end_c, c;
	int i;

	start_c = a;
	end_c = a;

	for (i = 0; i < n - 1; i++)
	{
		end_c++;
	}

	for  (i = 0; i < / 2; i++)
	{
		c = *end_c;
		*end_c = *start_c;

		start_c++;
		end_c--;
	}

}

