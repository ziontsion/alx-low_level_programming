#include <stdio.h>
<<<<<<< HEAD
/* main method return a text
 *
(* Return 0 at the end of the main
*/
int main()
{	
	puts("_putchar");

=======

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
>>>>>>> 817cc2a648c2f194bda3794c8648d0fe379cf5d3
return (0);
}
