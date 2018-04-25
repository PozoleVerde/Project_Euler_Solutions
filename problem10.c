#include <stdio.h>
/*
  The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
  Find the sum of all the primes below two million.
*/
int isPrime(long int n){
  if(n % 2 == 0 && n > 2)
    return 0;
  for(long int i = 3; i*i <= n; i+=2)
    if(n % i == 0)
      return 0;
  return 1;
}
void main(){
  long int sum = 2;
  for(int i = 3; i < 2000000; i+=2)
    if(isPrime(i))
      sum += i;
  printf("sum = %ld",sum);
}
