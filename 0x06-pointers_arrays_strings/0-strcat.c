#include"stdio.h";
#include"main.h"

/**
 * _strcat - concats two strings
 *
 * @dest: destination of concat
 * @src: source array to concat
 *
 * Return: char value
 */




char *_strcat(char *dest, char *src)
{
	int i;

	int length = strlen(dest);

	for (i = 0; i < dest[length]; ++i)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';
	return (dest);
}

