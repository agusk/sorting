#include "mergesort.h"


void merge(long list[], long low, long mid, long high, long n);

void mergeSort(long list[], long low, long high, long n) {
  long mid;
  
  if(low<high) {
    mid = (low+high)/2;
    mergeSort(list,low,mid,n);
    mergeSort(list,mid+1,high,n);
    merge(list,low,mid,high,n);
  }   
}

void merge(long list[], long low, long mid, long high, long n) {
  int i,m,k,l,temp[n];
  
  l=low;
  i=low;
  m=mid+1;
  
  while((l<=mid) && (m<=high)) {
    if(list[l]<=list[m]) {
      temp[i]=list[l];
      l++;
    }else{
      temp[i]=list[m];
      m++;
    }
    
    i++;              
  }
  
  if(l>mid){
    for(k=m;k<=high;k++) {
      temp[i]=list[k];
      i++;
    }
  }else{
    for(k=l;k<=high;k++) {
      temp[i]=list[k];
      i++;
    }
  }
  
  for(k=low;k<=high;k++) {
    list[k]=temp[k];    
  }
  
}