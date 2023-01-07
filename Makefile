CC = gcc
CFLAGS = -Wall
LINKS = -lSDL2 -lSDL2_image
OUTFILE = snake
INFILE = main.c

snake: 
	$(CC) $(INFILE) $(CFLAGS) $(LINKS) -o $(OUTFILE)
