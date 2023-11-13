#include "main.h"

/**
 * test 2
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int NBR;
	unsigned int a;

	NBR = 1;
	for (a = 1; a <= power; a++)
		NBR *= base;
	return (NBR);
}

/**
 * test 2
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, verif;
	char drapo;

	drapo = 0;
	div = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		verif = n & div;
		if (verif == div)
		{
			drapo = 1;
			_putchar('1');
		}
		else if (drapo == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
