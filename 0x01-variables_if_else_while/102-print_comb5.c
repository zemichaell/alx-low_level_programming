#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (success/correct)
 */
int main(void)
{
int num1 = 48, a= 0, b, combination = 44;
while (a <= 99)
{
b = a + 1;
while (b <= 99)
{
putchar(a / 10) + num1;
putchar(a % 10) + num1;
putchar(32);
putchar((b / 10) + num1);
putchar((a % 10) + num1);

if (a !=98 || b !=99 )
{
putchar(combination);
putchar(32);
}
b += 1;
}
a += 1;
}

putchar('\n');

return (0);
}
