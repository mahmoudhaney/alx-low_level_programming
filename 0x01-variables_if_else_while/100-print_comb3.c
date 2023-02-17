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
		for(int j = 0; j <= 9; ++j)
		{
			if(i < j)
			{
				putchar('0' + i);
				putchar('0' + j);
				if(i != 8 || j != 9)
				{
						putchar(',');
						putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	
	return (0);
}
