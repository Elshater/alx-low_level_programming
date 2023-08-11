#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - chech if  greater than 5, is less than 6, or is 0
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	 l = n % 10;
	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	} else if (l < 6 && l  != 0)
	{
		printf("Last digit of %d is %d and is less than %d and not 0\n", n, l);
	} else
	{
		printf("Last digit of 980 is 0 and is 0\n", n, l);
	}
	return (0);
}
