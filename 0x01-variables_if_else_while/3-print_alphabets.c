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
	for(char c = 'a'; c < 'z' ; ++c)
		putchar(c);
	for(char c = 'A'; c < 'Z' ; ++c)
		putchar(c);
	putchar('\n');
	return (0);
}
