#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return -Always 0 (Success)
 */
void print_alphabet(void)
{
	int i = 0;

	for (i = 97; i <= 122; i++)
		_putchar(i);

	_putchar('\n');
}
