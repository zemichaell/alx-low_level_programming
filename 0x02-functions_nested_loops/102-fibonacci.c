#include "main.h"
#include  <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
long i = 0;
long j = 1;
int n = 0;
long fibonacci;

while (n < 50)
{
fibonacci = j + i;
if (n != 49)
printf("%ld, ", fibonacci);
else
printf("%ld\n", fibonacci);
i = j;
j = fibonacci;
n += 1;
}

return (0);
	
}
