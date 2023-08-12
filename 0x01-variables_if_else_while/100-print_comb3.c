#include <stdio.h>

/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
   	 int i;
   	 int j;
   	 for (i = 48; i <= 56; i++)
    	{
        	for (j = 49; j <= 57; j++)
       		{
            	if (j > i)
            	{	
                	putchar(i);
                	putchar(j);
                	if (i == 56 && j == 57)
                	{
                    		continue;
                	}
                	putchar(',');
                	putchar(' ');
            		}
        	}
    	}
    	putchar('\n');
    	return (0);
}
