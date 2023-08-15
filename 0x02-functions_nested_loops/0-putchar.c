#include "main.h"

/**
 * main - Prints Holberton as a message.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int string[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int i, size;

	size = sizeof(string) / sizeof(int);
	for (i = 0; i < size ; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
	return (0);
}

