#include "main.h"

/**
* print_rev - Prints reversed string, followed by a new line
* @s: pointer to the string to point
* Return: void
*/

void print_rev(char *s)
{
	int len = 0, index = 0;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
