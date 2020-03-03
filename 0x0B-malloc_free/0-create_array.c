#include "holberton.h"
/*
 *
 *
 *
 */
char *create_array(unsigned int size, char c)
{
	int i;

	i = 0;
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0, i < size, i++)
	{
		if (c)
		{
			return (c);
		}
		else
		{
			return(NULL);
		}
	}
}
