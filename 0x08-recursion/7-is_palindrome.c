#include "holberton.h"
/**
 * is_prime_number - Function that return if an int is prime or not
 * @n: Int number
 * Return: integer number
 */
int is_palindrome(char *s)
{
	if (*s)
	{
		is_palindrome(*s)
		
	}
	return (prime_num(1, n));
}
/**
 * prime_num - verify number to number if is prime
 * @x: Int number
 * @y: int number same to n
 * Return: integer number
 */
int prime_num(int x, int y)
{
	if (x * x == y)
	{
		return (0);
	}
	else if (x * x > y)
	{
		return (1);
	}
	else
	{
		return (prime_num(x + 1, y));
	}
}
