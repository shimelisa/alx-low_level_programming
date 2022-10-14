#include <stdio.h>
#include <stdlib.h>
/**
* main - main body
* Description: this program dispay numbers
* Return: 0 (always 0 for main)
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	putchar('\n');

	return (0);
}
