#include <stdio.h>
#include <stdlib.h>
/*
Problem Statement:
  A palindromic number reads the same both ways. 
  The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
  Find the largest palindrome made from the product of two 3-digit numbers.
*/

//linked list based approach
struct node{
  int data;
  struct node *next;
};
struct node *head = NULL;
void insert(int n){
  struct node *temp = (struct node *) malloc(sizeof(struct node));
  temp->data = n;
  temp->next = head;
  head = temp;
}
void sort(){ // bubble sort approach
  if(head == NULL)
    return;
  struct node *temp, *upperLim = NULL;
  int swap;
  do{
    swap = 0;
    for(temp = head; temp->next != upperLim; temp = temp->next)
      if(temp->data < temp->next->data){
        temp->data += temp->next->data;
        temp->next->data = temp->data - temp->next->data;
        temp->data -= temp->next->data;
        swap = 1;
      }
    upperLim = temp;
  }while(swap);
}
void max(){
  if(head == NULL)
    return;
  struct node *temp;
  int big= head->data;
  for(temp = head; temp !=NULL; temp = temp->next)
    if(big < temp->data)
      big = temp->data;
  printf("\n[Linear Search] The largest palindrome = %d", big); //linear search approach
}
int palindrome(int n){
  int temp, leftover,reversed = 0;
  for(temp = n; temp != 0; temp/=10){
    leftover = temp % 10;
    reversed = reversed * 10 + leftover;
  }
  if(reversed == n)
    return 1;
  return 0;
}

void main(){
  int num1 = 999, num2 = 999;
  int j, i;
  for(i = num1; i > 99; i--){
      for(j = num2; j > 99; j--)
        if(palindrome(i*j))
          insert(i*j);
      j = num2;
  }
  sort();
  printf("[Bubble Sort] The largest palindrome = %d", head->data);
  max();
}
