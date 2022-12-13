#include <stdio.h>

/**
 * main - Entry point
 * Description: prints "_putchar \n"
(* Return: Always 0 (success)
**/

int main(void)
{
	char listof[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(listof[c]);
	}
	_putchar('\n');
return (0);
}
