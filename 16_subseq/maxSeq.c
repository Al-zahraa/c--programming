#include <stdio.h>
#include <stdlib.h>


size_t maxSeq(int * array, size_t n){
  size_t maxseq = 1;
  size_t tempmax = 0 ;
  size_t current = array[0];
  if ( n == 0){
    return 0;
  }
  
  for (int i = 1; i < n; i++){
    //if ( (current > array[i]) || ){
      // current = array[i];
      // tempmax = 1;
      // }
    if ((current < array[i]) || (current == array[i])){
      current = array[i];
      tempmax ++;
   }
      else {
	current = array[i];
   if (tempmax > maxseq) {
     maxseq = tempmax;
   }
   tempmax = 1;
  }
  }
  return maxseq;
}
