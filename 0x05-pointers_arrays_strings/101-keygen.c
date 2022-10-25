#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "main.h"
/**
* main - generate password
* Return: zero
*/
int main(void)
{
	int i;
	char j;

	srand(time(NULL));
	while (i <= 2645)
	{
		j = rand() % 128;
		i += j;
		putchar(j);
	}
	putchar(2772 - i);
	putchar('\n');

	return (0);
}
