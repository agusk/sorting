all: test

test: bubblesort.o main.o
	gcc bubblesort.o main.o -o test
	
bubblesort.o: bubblesort.c
	gcc -c bubblesort.c

main.o: main.c
	gcc -c main.c
	
clean:
	rm -f *.o test