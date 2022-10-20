#include <stdio.h>
/**
* main - prints first 98 Fibonacci numbers
*
* Return: Alwyas 0.
*/
int main (void)
{
	int fib0;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
	unsigned long half1, hafl2;

	for (fib0 = 0; fib0 < 92; fib0++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);

		fib1 = fib2;
		fib2 = sub;
	}

	fib1_half1 = fib1 / 10000000000;
	fib2_half1 = fib2 / 10000000000;
	fib1_half2 = fib1 % 10000000000;
	fib2_half2 = fib2 % 10000000000;

	for (fib0 = 93; fib0 < 99; fib0+++)
	{
		half1 = fib1_half1 + fib2_half1;
		half2 = fib1_half2 + fib2_half2;

		if (fib1_half2 + fib2_half2 > 9999999999)
		{
			half1 += 1;
			half %= 10000000000;
		}

		printf("%lu%lu", half1, half2);

		if (fib0 != 98)
			printf(", ");

		fib1_half1 = fib2_half1;
		fib1_half2 = fib2_half2;
		fib2_half1 = half1;
		fib2_half2 = half2;
	}
	printf("\n");
	return (0);
}
