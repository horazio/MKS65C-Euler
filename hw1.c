#include <stdio.h>

//project euler hw problems
int problem1(int bound){
  int sum = 0;
  int count;
  for(count = 0; count < bound; count++){
    if(count % 5 == 0 || count % 3 == 0){
      sum += count;
    }
  }
  return sum;
}


int problem6(int bound){
  int count;
  int sumSquares = 0;
  for(count = 1; count <= bound; count++){
    sumSquares += count * count;
  }
  int squareSum = 0;
  count = bound;
  while(count > 0){
    squareSum += count;
    count--;
  }
  squareSum *= squareSum;
  return squareSum - sumSquares;
}


int main(){
  printf("The answer is: %d \n", problem1(1000));
  printf("The answer is: %d \n", problem6(100));
  return 0;
}
