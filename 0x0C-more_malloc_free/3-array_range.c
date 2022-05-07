#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
<<<<<<< HEAD
 * array_range - create an array of integers
 * @min: minimum number to start
 * @max: maximum number to start
 * Return: the pointer created or NULL
 */
=======
* *array_range - create an array of integers
*@min: minimum number to start
*@max: maximum number to start
*Return: the pointer created or NULL
*/
>>>>>>> 6b548176f8782bc5960a3610714cb94f66b2c40e
int *array_range(int min, int max)
{
	int *p, i, d;

	if (min > max)
		return (NULL);

	d = max - min;
	p = malloc((d + 1) * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i <= d; i++, min++)
	{
		p[i] = min;
	}
	return (p);
}
