#include <stdio.h>
/**
* main - Prin first 50 Fibonacci numbers
*
* Return: Always 0
*/
int main(void)
{
	int fib0;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (fib0 = 0; fib0 < 50; fib0++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (fib0 == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
