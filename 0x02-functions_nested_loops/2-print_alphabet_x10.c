#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - function
 *
 * Return - 0 not because it is void
*/
void print_alphabet_x10(void)
{
	int b = 0;

	while (b < 10)
	{
		char a = 'a';

		while (a <= 'z')
		{
			putchar(a);
			a++;
		}
		putchar('\n');
		b++;
	}
}
