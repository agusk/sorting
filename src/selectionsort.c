#include "selectionsort.h"


void selectionSort(long list[], long n) {
  
  long i,j,index,temp;
  
  for(i=0; i<(n-1); i++) {
    
    index = i;
    for(j=i+1;j<n;j++) {
      if(list[index]>list[j])
	index = j;      
    }
    if(index!=i) {
      temp = list[i];
      list[i] = list[index];
      list[index] = temp;
    }
     
  }

}
