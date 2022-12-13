#include <stdio.h>
#include "main.h"

/**
 * print_alphabet- print the alphabet
 *
 * Return: no retun 0 here.
 *
*/

void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		putchar (alp);
		alp++;
	}
	putchar ('\n');
}
