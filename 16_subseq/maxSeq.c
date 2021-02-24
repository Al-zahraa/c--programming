#include <stdio.h>
#include <stdlib.h>


size_t maxSeq(int * array, size_t n){
  size_t maxseq = 1;
  size_t tempmax = 1 ;
  size_t current = array[0];
  if ( n == 0){
    return 0;
  }

  for (size_t i = 1; i < n; i++){

    if (current < array[i]){
      current = array[i];
      tempmax ++;
    }
    else{
      if (tempmax > maxseq) {
      maxseq = tempmax;
      }
    }
  }
  if (lenth > maxlen) maxlen = lenth;
  return maxseq;
}
