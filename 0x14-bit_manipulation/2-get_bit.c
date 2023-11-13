#include"main.h"

/**
 * test 3
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int dip, verif;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	dip = 1 << index;
	verif = n & dip;
	if (verif == dip)
		return (1);
	return (0);
}
