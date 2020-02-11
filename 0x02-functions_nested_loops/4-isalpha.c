#include "holberton.h"

/**
 * main - Entry point
 * description: we'll know if there are char alpha
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
