#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *ch;
	int i;

	if (size == NULL)
	{
		return (NULL);
	}

	ch = malloc(sizeof(int) * size);

	if (ch == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < n; i++)
	{
		ch[i] = c;
	}
	return (ch);
}
