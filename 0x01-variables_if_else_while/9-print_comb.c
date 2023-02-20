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

	for (int i = 0; i <= 9; i++)
	{
		putchar('0' + i);
		if(i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	// OR:
	/*for (i = 10; i < 20; i++)
	{
		putchar((i % 10) + '0');
		if (i != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');*/
	return (0);
}