#include <stdio.h>
#include <stdlib.h>


size_t maxSeq(int * array, size_t n){
  size_t maxseq = 0;
  size_t tempmax = 1 ;
  //size_t current = array[0];
  if ( n == 0){return 0;}

  for (size_t i = 1; i < n; i++){
    if (array[i] > array [i-1] ){tempmax ++;}
    else{
      if (tempmax > maxseq){maxseq = tempmax;}
      tempmax = 1;
    }
    //current = array[i];
  }
  if (tempmax > maxseq){maxseq = tempmax;}
  return maxseq;
} 
