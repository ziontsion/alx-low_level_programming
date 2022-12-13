#include "main.h"

/**
 * _islower - checks for a lowercase
 *@c: letter being cheked
 * Return: 0 if not c.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
