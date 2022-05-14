.PHONY: clean bin/main
CFLAGS = -Wall -Wextra -Werror
CPPFLAGS = -MMD

bin/main: obj/src/chessviz/chessviz.o obj/src/libchessviz/libchess.a
	gcc $(CFLAGS) -o $@ $^

bin/test: obj/test/main.o obj/test/test.o obj/src/libchessviz/libchess.a
	gcc $(CFLAGS) -o $@ $^


obj/src/libchessviz/libchess.a: obj/src/libchessviz/printboard.o obj/src/libchessviz/coordinates.o obj/src/libchessviz/move.o obj/test/test.o
	ar src $@ $^


obj/src/libchessviz/printboard.o: src/libchessviz/printboard.c
	gcc -c $(CFLAGS) $(CPPFLAGS) -I src/ -o $@ src/libchessviz/printboard.c

obj/src/libchessviz/coordinates.o: src/libchessviz/coordinates.c
	gcc -c $(CFLAGS) $(CPPFLAGS) -I src/ -o $@ src/libchessviz/coordinates.c

obj/src/libchessviz/move.o: src/libchessviz/move.c
	cc -c $(CFLAGS) $(CPPFLAGS) -I src/ -o $@ src/libchessviz/move.c

obj/src/chessviz/chessviz.o: src/chessviz/chessviz.c
	gcc -c $(CFLAGS) $(CPPFLAGS) -I src/ -o $@ src/chessviz/chessviz.c


obj/test/test.o: test/board_test.c
	gcc -c $(CFLAGS) $(CPPFLAGS) -I thirdparty/ -I src/ -o $@ $<

obj/test/main.o: test/main.c
	gcc -c $(CFLAGS) $(CPPFLAGS) -I thirdparty/ -I src/ -o $@ $<

run/main:
	./bin/main

run/test:
	./bin/test

clean:
	rm obj/src/chessviz/*.o
	rm obj/src/libchessviz/*.o
	rm obj/src/libchessviz/*.a
	rm obj/src/chessviz/*.d
	rm obj/src/libchessviz/*.d
	rm -f obj/test/*.o obj/test/*.d