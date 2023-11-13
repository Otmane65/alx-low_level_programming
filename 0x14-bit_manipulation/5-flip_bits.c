#include "main.h"

/**
 * test 6
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    
	int a, cnt = 0;
	unsigned long int crt;
	unsigned long int ex = n ^ m;


	for (a = 63; a >= 0; a--)
	{
		crt = ex >> a;
		if (crt & 1)
			cnt++;
	}

	return (cnt);
}
