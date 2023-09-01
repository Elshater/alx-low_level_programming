#include"main.h"

/**
 * _abs - Returns  the absolute value
 *
 * @i: input number as an integer.
 *
 * Return: absolute value
 */


int _abs(int i)
{
	if (i < 0)
	{
		return (i *= -1);
	}
	else
	{
		return (i);
	}
}
