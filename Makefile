CC = gcc
CFLAGS = -Wall
LINKS = -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -lSDL2_ttf
OUTFILE = main
INFILE = main.c

snake: 
	$(CC) $(INFILE) $(CFLAGS) $(LINKS) -o $(OUTFILE)
