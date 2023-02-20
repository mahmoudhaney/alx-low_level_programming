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

	/* 
	OR: another soltuion based on ASCII codes 
	*/
	/* 
	char a = '0';
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
	putchar('\n'); 
	*/
	return (0);
}
