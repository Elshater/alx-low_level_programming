#include"main.h"
/**
 * times_table - Prints the 9 times table
 *
 * Return: no return
 */
void times_table(void)
{
	int i, j, multi;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			multi = i * j;
			_putchar(',');
			_putchar(' ');


			if (multi <= 9)
			{
				_putchar(' ');
				_putchar(multi + 48);
			}
			else
			{
				_putchar((multi / 10) + 48);
				_putchar((multi % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
