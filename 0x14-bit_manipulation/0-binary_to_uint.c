#include "main.h"

/**
 * TEST 1
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int NBR;

	NBR = 0;
	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		NBR <<= 1;
		if (b[a] == '1')
			NBR += 1;
	}
	return (NBR);
}
