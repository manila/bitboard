#include "bb.h"

int	main(void)
{
	int i = 0, width = 8;
	uint64_t bitmask, bitboard;

	bitmask = 0;
	bitmask = ~((~bitmask) >> 1);
	bitboard = 25;
	
	while (bitmask)
	{
		if (i && i % (width) == 0)
		{
			printf(": %llu\n", (unsigned long long) bitmask);
		}
		
		if (bitboard & bitmask)
		{
			printf("%d", 1);
		}		
		else
			printf("%d", 0);
		bitmask = bitmask >> 1;
		i++;
	}
	
	putchar('\n');
	return (0);
}
