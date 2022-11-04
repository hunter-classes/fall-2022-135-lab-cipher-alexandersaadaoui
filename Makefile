main: main.o caesar.o
	g++ -o main main.o caesar.o

tests: tests.o caesar.o
	g++ -o tests tests.o caesar.o



caesar.o: caesar.cpp caesar.h

main.o: main.cpp caesar.h

tests.o: tests.cpp doctest.h caesar.h

clean:
	rm -f main.o caesar.o tests.o