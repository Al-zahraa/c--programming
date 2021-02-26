#include <stdio.h>
#include <stdlib.h>

unsigned power (unsigned x, unsigned y);

void run_check(unsigned x, unsigned y, unsigned expected_ans){
  if(expected_ans != power(x,y)) exit(EXIT_FAILURE);
     }

int main (void) {

   run_check(0,0,1);
   run_check(10,5,100000);

  return EXIT_SUCCESS;
}
