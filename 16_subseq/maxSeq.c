#include <stdio.h>
#include <stdlib.h>


size_t maxSeq(int * array, size_t n){
  int maxseq = 1;
  int current = array[0];
  if ( n == 0){
    return 0;
  }
  
  for (int i = 1; i < n; i++){
    if ( (current > array[i]) || (current == array[i])){
      current = array[i];
      maxseq = 1;
    }
   else if (current < array[i]){
      current = array[i];
      maxseq++;
    }
   else {
     continue;
   }
  }
  return maxseq;
}
