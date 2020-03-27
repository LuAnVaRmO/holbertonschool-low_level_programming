#include "holberton.h"
/**
 * binary_to_uint - convert a binary
 * @b: stringw with 0 and 1
 * Description: convert a binary to a positive integer
 * Return: Converted number or 0 if fail
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int res;

	res = 0;
	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		res = res << 1;
		if (b[i] == '1')
			res += 1;
	}
	return (res);
}
