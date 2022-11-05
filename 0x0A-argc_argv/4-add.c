#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* check_char - check if given char is # or not
* @c: pointer to char to be checked
*
* Return: -1 if it is character else actual numbe
*/

int check_char(char *c)
{
	int i = 0, j = 0, k = strlen(c);

	while (i < k)
	{
		if (c[i] < '0' || c[i] > '9')
			return (-1);
		else
			j = j * 10 + (c[i] - '0');
		i++;
	}

	return (j);
}

/**
* main - print programs name
* @argc: argument counter = #of arg supplied to program
* @argv: argument vector = array of pointes to the arguments
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	int l, m, sum = 0;

	for (l = 1; l < argc; l++)
	{
		m = check_char(argv[l]);
		if (m == -1)
		{
			printf("Error\n");
			return(1);
		}

		sum += m;
	}

	printf("%d\n", sum);
	return (0);
}
