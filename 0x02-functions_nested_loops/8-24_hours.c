#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 * @x: every minute of the day
 * Return: Always 0.
 */
void jack_baure(void)
{
int hour;
int minute;

for (hour = 0; hour <= 23; hour++)
{
for (minute = 0; minute <= 59; minute++)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');
_putchar('\n');
}
}
}
