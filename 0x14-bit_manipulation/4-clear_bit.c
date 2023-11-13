#include "main.h"
#include <stdlib.h>
/**
 * test 5
 */
 
int clear_bit(unsigned long int *n, unsigned int ind)
{
	if (ind > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << ind);
	return (1);
}
