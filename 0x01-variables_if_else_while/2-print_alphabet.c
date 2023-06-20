#include <stdio.h>
/**
 *main - Entry point
 *Description: 'print alphabets lowercase'
 *Return: Aways 0
 */
int main(void)
{
	int n = 'a';

	while (n <= 'z')
{
	putchar(n);
	n++;
}
	putchar('\n');
	return (0);
}
