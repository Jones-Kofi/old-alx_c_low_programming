#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 00 ; i <= 98 ; i++)
	{
		for (j = 00 ; j <= 99 ; j++)
		{
			putchar(i + '0');
			putchar(' ')
			putchar(j + '0');
		}
	}
}
