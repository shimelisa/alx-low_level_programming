#include <stdio.h>
#include "main.h"
/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
	int n, i;
	char c;
	int nn[3] = {98, 198, 298};
	char cc[3] = {'a', 'Z', 'b'};

	printf("Size of type 'char' on my computer is: %lu bytes.\n", sizeof(char));
	printf("Size of type 'char' on my computer is: %lu bytes.\n", sizeof(int));
	printf("Size of type 'char' on my computer is: %lu bytes.\n", sizeof(float));
	printf("Size of type of my variable n on my computer is: %lu bytes.\n", sizeof(n));

	printf("Address of variable 'c': %p\n", &c);
	printf("Address of variable 'n': %p\n", &n);

	for (i = 0; i < 3; i++)
	{
		printf("Address and value of nn[%i] is: %p %i\n", i, &(nn[i]), nn[i]);
		printf("Address and value of cc[%i] is: %p %c\n", i, &(cc[i]), cc[i]);
	}

	int *p;
	int a[2];
	char g[7] = "School";
	int m;

	p = &m;
	printf("p = &m; \np: %p\n", p);
	printf("p + 1: %p\n", p + 1);
	printf("p + 2: %p\n", p + 2);
	printf("p + 10: %p\n", p + 10);

	p = a;
	printf("p = a; \np: %p\np + 1: %p\n", p, p + 1);
	printf("%s\n", g);
	printf("Value of \"School\": %p\n", "School");
	printf("%p\n",g);

	return (0);
}
