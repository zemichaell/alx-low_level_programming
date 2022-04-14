#include "main.h"
#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int multiple = 0;
	int sum = 0;

	while(multiple < 1024)
	{
		if (multiple % 3 == 0 || multiple % 5 == 0)
		{
			sum =+ multiple;
		}
		multiple += 1;
	}
	printf("%d\n", sum);
	return (0);
}
