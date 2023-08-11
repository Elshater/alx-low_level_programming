#include <stdio.h>

/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	int i;
	int j;
	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i > j)
			{
				continue;
			}
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
