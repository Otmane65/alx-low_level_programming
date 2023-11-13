#include "main.h"

/**
 * test 4
 */
int set_bit(unsigned long int *n, unsigned int ind)
{
	unsigned long int sbit;

	if (ind > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	sbit = 1 << ind;
	*n = *n | sbit;
	return (1);
}
