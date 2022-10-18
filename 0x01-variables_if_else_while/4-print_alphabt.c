#include <stdio.h>

/**
 * main - print all latters but not q
 *
 * Return: Always 0
 */
int main(void)
{
	char nq;

	for (nq = 'a'; nq <= 'z'; nq++)
	{
		if (nq != 'e' && nq != 'q')
			putchar (nq);
	}
	putchar ('\n');
	return (0);
}
