#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


void rotate(char matrix[10][10]){
  for (size_t i = 0; i < 10 / 2; i++){
      for (size_t j = i; j < 10 - i - 1; j++){
	  // Swap elements of each cycle
	  // in clockwise direction
	  size_t temp = matrix[i][j];
	 matrix[i][j] = matrix[10 - 1 - j][i];
	  matrix[10 - 1 - j][i] = matrix[10- 1 - i][10 - 1 - j];
	  matrix[10 - 1 - i][10 - 1 - j] = matrix[j][10 - 1 - i];
	  matrix[j][10 - 1 - i] = temp;
	}
    }
}
  
