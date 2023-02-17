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
			for(int k = 0; k <= 9; ++k)
			{
				if(i < j && j < k)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
					if(i != 7 || j != 8 || k != 9)
					{
							putchar(',');
							putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	// More Efficient Syntax
	/*
	for (int i = 0; i <= 9; i++)
	{
		for(int j = 0; j <= 9; ++j)
		{
			if(i < j)
			{
				for(int k = 0; k <= 9; ++k)
				{
					if(i < j && j < k)
					{
						putchar('0' + i);
						putchar('0' + j);
						putchar('0' + k);
						if(i != 7 || j != 8 || k != 9)
						{
								putchar(',');
								putchar(' ');
						}
					}
				}
			}
			continue;
		}
	}
	putchar('\n');
	*/

	return (0);
}
