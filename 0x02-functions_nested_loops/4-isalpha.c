#include "main.h"
/**
 * _isalpha - Return 1 if c is a letter. lowecase or uppercase
 * @c: The int to print
 * return: Always 0.
 */

int _isalpha(int c)

{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
