#include "cyclesort.h"


void cycleSort(long list[], long n) {
  int i,j,k,temp,item,pos;
  
  for(i=0;i<n;i++) {
    item = list[i];
    pos = i;
    
    do {
      k = 0;
      
      for(j=0;j<n;j++) {
	if(pos!=j && list[j]<item)
	  k++;	
      }
      
      if(pos!=k) {
	while(pos!=k && item==list[k])
	  k++;
	
	temp = list[k];
	list[k] = item;
	item = temp;
	pos = k;	
      }      
      
    }while(pos!=i);    
    
  }  
  
}