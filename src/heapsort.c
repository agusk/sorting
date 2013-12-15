#include "heapsort.h"


void heapSort(long list[], long n) {
  int i,j,k,v,temp;
  
  // create heap
  for(i=1;i<n;i++) {
   k = i;
   
   do {
     v = (k-1)/2;
     
     if(list[v]<list[k]) {
       temp = list[v];
       list[v] = list[k];
       list[k] = temp;              
     }
     k = v;
     
   }while(k!=0);            
  }
  
  // sorting
  for(j=n-1;j>=0;j--) {
    temp = list[0];
    list[0] = list[j];
    list[j] = temp;
    v = 0;
    
    do {
      k = 2*v + 1;
      
      if(list[k] < list[k+1] && k < j-1)
	k++;
      
      if(list[v]<list[k] && k<j) {
	temp = list[v];
	list[v] = list[k];
	list[k] = temp;		
      }
      v = k;
      
    }while(k<j);        
  }
    
}