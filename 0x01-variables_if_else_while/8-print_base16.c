#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	char c;

	for (; n <= 9 ; ++n)
		putchar('0' + n);
	for (c = 'a'; c <= 'f'; ++c)
		putchar(c);
	putchar('\n');
	return (0);
}
