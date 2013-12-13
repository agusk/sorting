#include "bubblesort.h"
#include <stdio.h>

int main() {
  
  int i;
  long list[10] = { 10,11,8,19,5,3,22,8,35,13};
  
  printf("data: ");
  for(i=0;i<10;i++)
    printf("%ld ", list[i]);
  printf("\n");
  
  bubbleSort(list,10);
  

  printf("sorting: ");
  for(i=0;i<10;i++)
    printf("%ld ", list[i]);
  printf("\n");

}