CC=g++

output: main.o
	$(CC) main.o -o output
	
main.o: main.cpp
	$(CC) -c main.cpp
	
clean:
	rm -f *.o output
