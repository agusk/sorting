#include "bubblesort.h"
#include "insertionsort.h"
#include "selectionsort.h"
#include "heapsort.h"
#include "quicksort.h"
#include "mergesort.h"
#include "radixsort.h"
#include <stdio.h>

long list[10] = { 10,11,8,19,5,3,22,8,35,13};

void resetList();
void printList(char* title);

int main() {
  
  printList("data");
  
  bubbleSort(list,10);
  printList("bubblesort");
  
  
  resetList();
  
  insertionSort(list,10);
  printList("insertionsort");
  
  resetList();
  
  selectionSort(list,10);
  printList("selectionsort");
  
  resetList();
  
  heapSort(list,10);
  printList("heapsort");
  
  resetList();
  
  quickSort(list,0,9);
  printList("quicksort");
  
  resetList();
  
  mergeSort(list,0,9,10);
  printList("mergesort");

  resetList();
  
  radixSort(list,10);
  printList("radixsort");  

}

void resetList() {
  list[0] = 10;
  list[1] = 11;
  list[2] = 8;
  list[3] = 19;
  list[4] = 5;
  list[5] = 3;
  list[6] = 22;
  list[7] = 8;
  list[8] = 35;
  list[9] = 13;  
}

void printList(char* title) {
  int i;
  printf("%s :",title);
  for(i=0;i<10;i++)
    printf("%ld ", list[i]);
  printf("\n");
}
