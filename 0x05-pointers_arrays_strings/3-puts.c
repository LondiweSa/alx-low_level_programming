#include "main.h"

/**
 * _puts - function that prints a string
 * @s: string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++);
	_putchar(str[1]);
	_putchar('\n');
}
