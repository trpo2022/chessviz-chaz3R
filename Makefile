APP_NAME = chessviz
LIB_NAME = libchessviz
SOURCE=src/chessviz/
LIBSOURCE=src/libchessviz/
OBJLIB=obj/src/libchessviz/
OBJCHESS=obj/src/chessviz/

CC = gcc -c
CFLAGS = -Wall -Werror
INCLUDEPATH = -I src

all: bin/chessviz

obj/src/libchessviz/coordinates.o: $(LIBSOURCE)coordinates.c
	$(CC) $(INCLUDEPATH) $< -o $@
obj/src/libchessviz/printboard.o: $(LIBSOURCE)printboard.c
	$(CC) $(INCLUDEPATH) $< -o $@
obj/src/libchessviz/move.o: $(LIBSOURCE)move.c
	$(CC) $(INCLUDEPATH) $< -o $@
obj/src/chessviz/chessviz.o: $(SOURCE)chessviz.c
	$(CC) $(INCLUDEPATH) $< -o $@

obj/src/libchessviz/libchessviz.a: $(OBJLIB)coordinates.o $(OBJLIB)printboard.o $(OBJLIB)move.o
	ar rcs $@ $^

bin/chessviz: $(OBJCHESS)chessviz.o $(OBJLIB)libchessviz.a 
	gcc $(CFLAGS) $(INCLUDEPATH) $^ -o $@
run:
	./bin/chessviz
clean:
	rm -f $(OBJLIB) *.[oa]
	rm -f $(OBJCHESS) *.o
