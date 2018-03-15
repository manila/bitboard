#include "bb.h"

int	main(void)
{
	int i = 0, width = 8;
	uint64_t bitmask, bitboard;

	bitmask = 0;
	bitboard = 5223372036854775807;
	
	bitmask = ~bitmask;

	while (bitmask)
	{
		if (i % (width)  == 0)
		{
			putchar('\n');
		}
		
		printf("%lld", (long long) bitboard & bitmask);
		i++;
		bitmask = bitmask << 1;
	}

	putchar('\n');
	return (0);
}
