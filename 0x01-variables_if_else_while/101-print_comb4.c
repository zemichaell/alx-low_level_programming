#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 Success/correct
 */
int main(void)
{
int num1 = 48;
int num2;
int num3;
int combination = 44;
while (num1 <= 57)
{
num2 = num1 + 1;
while (num2 <= 57)
{
num3 = num2 + 1;
while (num3 <= 57)
{
putchar(num1);
putchar(num2);
putchar(num3);

if (num1 != 55 || num2 != 56 || num3 != 57)
{
putchar(combination);
putchar(32);
}
num3 += 1;
}
num2 += 1;
}
num1 += 1;
}
putchar('\n');

return (0);
}
