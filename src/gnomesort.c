#include "gnomesort.h"


void gnomeSort(long list[], long n){
  int i,temp;
  
  i = 0;
  while(i<n) {
    if(i==0 || list[i-1]<=list[i]) {
      i++;
    }else {
      temp = list[i-1];
      list[i-1] = list[i];
      list[i] = temp;
      i--;
    }    
  }  
}