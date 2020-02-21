#include "holberton.h"
/**
 * _strcmp - compare two strings
 * @s1: string to compare
 * @s2: string to compare too
 * Return: int
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for ((i = 0); i < (n / 2); i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;	
	}
}
