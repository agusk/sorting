all: test

test: bubblesort.o insertionsort.o selectionsort.o main.o
	gcc bubblesort.o insertionsort.o selectionsort.o main.o -o test
	
bubblesort.o: bubblesort.c
	gcc -c bubblesort.c

insertionsort.o: insertionsort.c
	gcc -c insertionsort.c

selectionsort.o: selectionsort.c
	gcc -c selectionsort.c

main.o: main.c
	gcc -c main.c
	
clean:
	rm -f *.o test