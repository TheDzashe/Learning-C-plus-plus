main: main.o Sum.o Average.o PrintSumAverage.o
	g++ Sum.o Average.o PrintSumAverage.o main.o -o main

Sum.o: Sum.cpp Sum.h
	g++ -c Sum.cpp

Average.o: Average.cpp Average.h Sum.h
	g++ -c Average.cpp

PrintSumAverage.o: PrintSumAverage.cpp PrintSumAverage.h
	g++ -c PrintSumAverage.cpp

main.o: main.cpp Sum.h Average.h PrintSumAverage.h
	g++ -c main.cpp

run: main
	./main

clean:
	rm -f main *.o *~


