#include <stdio.h>

/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/
int div(int n){ //checks if evenly divisable by numbers between 0<x<21
  for(int i = 1; i < 21; i++)
    if(n % i != 0)
      return 0;
  return 1;
}
void main(){
  int smallest = 2520, i;
  for(i = smallest; !div(i) ;i++);
  printf("smallest number  = %d", i);
}
