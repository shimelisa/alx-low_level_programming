#include "main.h"
/**
* string_toupper - change all lower case letter to upper case letters
* @str: string to be cappitalized
*
* Return: upper case char
*/
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}

	return (str);
}
