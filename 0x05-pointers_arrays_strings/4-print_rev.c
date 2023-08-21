#include"main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */


void print_rev(char *s)
{
	int length =  _strlen(s) - 1;

	for (int i = length; i >= 0 ; i--)
	{
		putchar(s[i]);
	}
}

