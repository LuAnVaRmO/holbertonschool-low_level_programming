#include <stdio.h>

/**
 * set_string - point to another pointer
 * @s : pointer
 * @to : pointer to the string
 */

void set_string(char **s, char *to)
{
	*s = to;
}
