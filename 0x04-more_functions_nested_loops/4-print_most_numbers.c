#include"main.h"

void print_most_numbers(void)
{
	int i;

	for (i = 48;i < 58; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
}
