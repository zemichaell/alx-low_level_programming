#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 Success/correct
 */
int main(void)
{
char upper_case_latter;
char lower_case_latter;

for (lower_case_latter = 'a'; lower_case_latter <= 'z'; lower_case_latter++)
{
putchar(lower_case_latter);
}
for (upper_case_latter = 'A'; upper_case_latter <= 'Z'; upper_case_latter++)
{
putchar(upper_case_latter);
}
putchar('\n');

return (0);
}
