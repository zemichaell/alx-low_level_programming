#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - random password generator for 101 crackme
 *
 * Return: Always 0.
 */

int main(void){
char a[10];
int r, n, i;

n = 0;
i = 0;

srand(time(NULL));
while (n < 2645)
{
r =rand() % 122;
if (r > 32)
{
a[i++] = r;
n += r;
}
}
a[i++] = (2772 - a);
a[i] = '\0';
printf("%s", a);


return (0);
}

