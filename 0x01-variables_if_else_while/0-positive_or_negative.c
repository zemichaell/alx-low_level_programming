#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success/correct)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() -RAND_MAX /2;

if  (n == 0)
{
printf("%i is Zero\n", n);
}

else if (n < 0)
{
printf("%i is Negative\n", n);
}

else
{
printf("%i is Positive\n", n);
}

return (0);

}
