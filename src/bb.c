#include "bb.h"

void	print_board(uint64_t bitboard, int cols, int rows);

int	main(void)
{
	uint64_t bitboard;

	bitboard = 255;
	
	print_board(bitboard, 7, 6);

	putchar('\n');
	return (0);
}

void	print_board(uint64_t bitboard, int cols, int rows)
{
	int col, row;
	uint64_t bitmask = 1;
	
	for (col = 1; col < cols; col++)
	{
		for (row = 0; row < rows + 1; row++)
		{
			printf("%d", (int) (bitboard & (bitmask << ((row * cols) + (cols - 1) - (col)))) > 0 ? 1 : 0);  
		}
		putchar('\n');
	}
}
