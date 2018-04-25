#include <stdio.h>

/*
The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

int sumOfSq(){
  int i, sum = 0;
  for(i = 1; i < 101;i++)
    sum+= i*i;
  return sum;
}
int sqOfSum(){
  int i, sum = 0;
  for(i = 1; i < 101;i++)
    sum+= i;
  return sum * sum;
}
void main(){
  printf("%d - %d = %d",sqOfSum(), sumOfSq(), sqOfSum()-sumOfSq());
}
