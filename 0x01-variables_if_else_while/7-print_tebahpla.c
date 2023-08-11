#include <stdio.h>

/**
 * main - Prints alphabet in reverse order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a' ; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
