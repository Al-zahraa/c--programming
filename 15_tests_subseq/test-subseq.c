#include <stdio.h>
#include <stdlib.h>

size_t maxSeq(int * array, size_t n);


int main(void) {

  int array1[]={1,2,3,4,5}; // all increasing
  int array2[]={-5,4,7,4,60,34,56};
  int array3[]={4,4,4,0,1}; //similar values
  int array4[]={-700,-700,-700,-700,-700}; // all similar vlaues
  int array5[]={};
  int array6[]={3,2,1,0,-1}; // alldecreasing


  int *arrayar[]={array1,array2,array3,array4,array5,array6};
  
  int arraylen[]={5,7,5,5,0,5};
  int arrayseq[]={5,3,2,1,0,1};
  
  for (int i=0; i<5; i++){
    if (maxSeq(arrayar[i],arraylen[i])!= arrayseq[i]){
      return EXIT_FAILURE;
    }
  }
  return EXIT_SUCCESS;
}
