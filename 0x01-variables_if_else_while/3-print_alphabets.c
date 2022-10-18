#include <stdio.h>

/**
 * main - print lower case and upper case
 *
 * Return: Always 0
 */
int main(void)
{
	char ep;

	for (ep = 'a'; ep <= 'z'; ep++)
		putchar (ep);
	for (ep = 'A'; ep <= 'Z'; ep++)
		putchar (ep);
	putchar ('\n');

	return (0);
}
