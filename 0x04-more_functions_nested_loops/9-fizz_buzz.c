#include <stdio.h>
#include <stdlib.h>

/**
* main - print 0 to 100 and for multiple of 3 print 'Fizz'
* for 5 'Buzz' for both 'FizzBuzz'
* Return: Always 0
*/
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
