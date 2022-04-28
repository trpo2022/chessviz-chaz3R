APP_NAME = chessviz
LIB_NAME = libchessviz
SOURCE=src/chessviz/
LIBSOURCE=src/libchessviz/

CC = gcc -c
CFLAGS = -Wall -Werror
INCLUDEPATH = -I src

all: coordinates printboard move chessviz
coordinates:
	$(CC) $(INCLUDEPATH) $(LIBSOURCE)coordinates.c
printboard:
	$(CC) $(INCLUDEPATH) $(LIBSOURCE)printboard.c
move:
	$(CC) $(INCLUDEPATH) $(LIBSOURCE)move.c
chessviz: coordinates printboard move
	gcc $(CFLAGS) $(INCLUDEPATH) -o chessviz *.o
run:
	./chessviz
clean:
	rm -f *.o