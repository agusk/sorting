all: test

test: bubblesort.o insertionsort.o selectionsort.o heapsort.o quicksort.o main.o
	gcc bubblesort.o insertionsort.o selectionsort.o heapsort.o quicksort.o main.o -o test
	
bubblesort.o: bubblesort.c
	gcc -c bubblesort.c

insertionsort.o: insertionsort.c
	gcc -c insertionsort.c

selectionsort.o: selectionsort.c
	gcc -c selectionsort.c

heapsort.o: heapsort.c
	gcc -c heapsort.c

quicksort.o: quicksort.c
	gcc -c quicksort.c

main.o: main.c
	gcc -c main.c
	
clean:
	rm -f *.o test