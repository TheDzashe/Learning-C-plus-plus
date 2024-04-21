main: main.o Perimeter.o Area.o
	g++ main.o Perimeter.o Area.o -o main 

Perimeter.o: Perimeter.cpp Perimeter.h Area.h
	g++ -c Perimeter.cpp

Area.o: Area.cpp Perimeter.h Area.h
	g++ -c Area.cpp

main.o: main.cpp Perimeter.h Area.h
	g++ -c main.cpp

clean:
	rm -f *.o *~

run: main
	./main