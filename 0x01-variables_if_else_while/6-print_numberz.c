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
	for (int a = 0; a <= 9 ; ++a)
		putchar('0' + a); // To make it 'char'
	putchar('\n');
	return (0);
}
