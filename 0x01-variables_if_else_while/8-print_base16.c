#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for(int n = 0; n <= 9 ; ++n)
		putchar('0' + n);
	for(char c = 'a'; c <= 'f'; ++c)
		putchar(c);
	putchar('\n');

	// OR: another soltuion based on ASCII codes
	/* char a = '0';
	for (int i = 0; i < 10; i++)
	{
		putchar(a);
		a++;
	}
	a = '1';
	for (int i = 0; i < 6; i++)
	{
		putchar('0' + a);
		a++;
	}
	putchar('\n'); */
	return (0);
}
