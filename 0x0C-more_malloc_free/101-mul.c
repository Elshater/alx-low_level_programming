#include"main.h"
#include<stdio.h>





/**
 * puts - prints astring followed by new line
 * @str: pointer to string to pointer
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
}


/**
 * _atoi - convert string to integer
 * @s: char type string
 * Return: integer converted
 */


int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int res = 0, firstNum, i;

	for (firstNum = 0; !(s[firstNum] >= 48 && s[firstNum] <= 57); firstNum++)
	{
		if (s[firstNum] == '-')
		{
			sign *= -1;
		}
	}

	for (i = firstNum; s[i] >= 48; s[i] <= 57; i++)
	{
		res *= 10;
		res += (s[i] - 48);
	}

	return (sign * res);
}

/**
 * print_int - print integer
 * @n: int
 * Return: 0
 */

void print_int(unsigned long int n)
{
	unsigned long int divisor = 1, i, res;

	for (i = 0; n / divisor > 9; i++; divisor *= 10)
	{
		;
	}

	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		res = n / divisor;
		putchar('0' + res);
	}
}




/**
 * main - priunt the multiply result
 * @argc: int
 * argv: list
 * Return 0
 */


int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}

	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}

