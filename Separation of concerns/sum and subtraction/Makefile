main: Sum.o Subtract.o main.o
	g++ Sum.o Subtract.o main.o -o main

main.o: main.cpp Subtract.h Sum.h
	g++ -c main.cpp

Sum.o: Sum.cpp Sum.h
	g++ -c Sum.cpp

Subtract.o: Subtract.cpp Subtract.h
	g++ -c Subtract.cpp

clean:
	rm -f main *.o *~

run: main
	./main