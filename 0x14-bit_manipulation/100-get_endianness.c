#include "main.h"

/**
 * test pro
 *
 *
 * Return: test 
 */

int get_endianness(void)
{
	int z;
	char *b;

	z = 1;
	b = (char *)&z;
	return (*b);
}
