#include "bubblesort.h"


void bubbleSort(long list[], long n) {
  
  long i,j,temp;
  
  for(i=0; i<(n-1); i++) {
    for(j=0;j<(n-i-1); j++) {
      
      if(list[j] > list[j+1]) {
	// swapping
	temp = list[j];
	list[j] = list[j+1];
	list[j+1] = temp;
	
      }

    }    
    
  }

}
