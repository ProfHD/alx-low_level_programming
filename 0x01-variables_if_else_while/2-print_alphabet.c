#include <stdio.h>
/**
 * main - standard input
 *
 * Return: Always 0
 */
int main(void)
{
	char xy;

	for (xy = 'a'; xy <= 'z'; xy++)
	{
		putchar(xy);
	}
	putchar('\n');
	return (0);
}
