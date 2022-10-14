#include <stdio.h>
#include <stdlib.h>
/**
* main - main funciton
* Description: This program display number 0 to 9
* Return: 0 (always 0 for main
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%i", num);
	putchar('\n');

	return (0);
}
