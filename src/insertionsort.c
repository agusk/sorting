#include "insertionsort.h"


void insertionSort(long list[], long n) {
  
  long i,index,temp;
  
  for(i=1; i<=(n-1); i++) {
    
    index = i;
    while(index>0 && list[index]<list[index-1]) {
      temp = list[index];
      list[index] = list[index-1];
      list[index-1] = temp;
      
      index--;      
    }
            
  }

}
