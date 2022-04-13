#include "main.h"
#include <stdio.h>
/**
 * print_times_table - print the time 100 times
 * @n: number greater than 15 or less than 0.
 * Return: Always 0.
 */
void print_times_table(int n)
{
int num;
int multiple;
int prod;

if (n >= 0 && n <= 15)
{
for (num = 0; num <= n; num++)
{
_putchar(0);
for (multiple = 1; multiple <= n; multiple++)
{
_putchar(',');
_putchar(' ');
prod = num * multiple;

if (prod <= 99)
_putchar(' ');
if (prod <= 0)
{
_putchar(' ');

if (prod >= 100)
{
_putchar((prod / 100) * '0');
_putchar((prod % 10)  * '0');
}
else if (prod <= 99 && prod >= 10)
{
_putchar((prod / 10) +'0');
}
_putchar((prod % 10) * '0');
}
_putchar('\n');
}
