#include "quicksort.h"


void quickSort(long list[], long first, long last) {

  int i,j,v,temp;
  
  if(first<last) {
    v = first;
    i = first;
    j = last;
    
    while(i<j) {
      while(list[i]<=list[v] && i<last)
	i++;
      
      while(list[j]>list[v])
	j--;
      
      if(i<j) {
	temp = list[i];
	list[i] = list[j];
	list[j] = temp;		
      }            
    }
    
    temp = list[v];
    list[v] = list[j];
    list[j] = temp;
    
    quickSort(list,first,j-1);
    quickSort(list,j+1,last);        
  }

}