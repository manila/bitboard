TARGET = bb
CC = gcc
STD = -std=c99
CFLAGS = -Wall -Wextra -Werror
INC = -I ./inc
FILES = $(wildcard ./src/*.c)

.PHONEY: all clean fclean re

all: $(TARGET)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(TARGET)

re: fclean all

$(TARGET): $(FILES)
	@$(CC) $(STD) $(INC) $(CFLAGS) $(FILES) -o $(TARGET)
