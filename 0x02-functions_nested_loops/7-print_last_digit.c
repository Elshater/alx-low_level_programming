#include"main.h"


/**
 * print_last_digit - Prints the last digit
 * of a number.
 *
 * @i: input number as an integer.
 *
 * Return: last digit.
*/

int print_last_digit(int i)
{
	int lastNumber;

	lastNumber = i % 10;

	if (lastNumber < 0)
	{
		_putchar(-lastNumber + 48);
		return (-lastNumber);
	}
	else
	{
		_putchar(lastNumber + 48);
		return (lastNumber);
	}

}
