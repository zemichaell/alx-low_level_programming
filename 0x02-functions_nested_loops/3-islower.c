#include "main.h"
/**
 * islower - function that checks for lowercase
 * 
 * Return: Always 0.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
