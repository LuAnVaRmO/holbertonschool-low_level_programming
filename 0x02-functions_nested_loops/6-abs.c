#include "holberton.h"

/**
 * main - Entry point
 * description: abs number
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n > 0)
	{
		return(n);
	}
	else if (n == 0)
	{
		return(n);
	}
	else
	{
		return(n * -1);
	}
}