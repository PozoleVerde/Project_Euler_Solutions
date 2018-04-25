#include <stdio.h>

/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?
*/

int isPrime(int n){
  int i;
  for(i = 2; i*i < n; i++)
    if(n % i == 0)
      return 0;
  return 1;
}

void main(){
  int counter= 6, i;
  for(i = 14; counter < 10001; i++)
    if(isPrime(i))
      counter++;
  printf("%dst number is %d",counter, i);
}
