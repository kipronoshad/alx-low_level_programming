#include <main.h>
#include <stdio.h>

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: Int representing a character
 * Return: Returns 1 if c is a digit otherwise 0
 **/
int _isdigit(int c)
{
		if (c >= 30 && c <= 39)
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
