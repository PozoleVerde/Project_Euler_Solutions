#include <stdio.h>

/*
  Problem Statement:
    The prime factors of 13195 are 5, 7, 13 and 29.
    What is the largest prime factor of the number 600851475143 ?
*/

void main(){
  long int prime = 600851475143,i;
  for(i = 2; i * i < prime ;i++)
    while(prime % i == 0)
      prime/=i;
  printf("%ld",prime);
}
