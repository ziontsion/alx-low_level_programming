#include <stdio.h>
#include "main.h"
/**
 * main -  method return a text
 *
(* Return: 0 at the end of the main
*/

int main(void)
{
	char listof[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		putchar(listof[c]);
	}
	putchar('\n');
return (0);
}
