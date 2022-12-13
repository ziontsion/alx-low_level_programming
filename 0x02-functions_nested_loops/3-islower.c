#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for a lowercase
 *@c: letter being cheked
 * Return: 0 if not c.
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (2);
}
