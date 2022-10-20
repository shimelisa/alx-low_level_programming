#include "main.h"
#include <stdio.h>
/**
* main - print natual number below 1024 if multiple of 3 or 5
*
* Return: Always 0
*/
int main(void)
{
	int i, j;

	for (i = 1; i < 1024; a++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
			j += i;
	}
	printf("%d\n", j);
	return (0);
}
