// Write a C program to display the n terms of odd natural numbers and their sum.
// Input number of terms : 10
// Expected Output :
// The odd numbers are :1 3 5 7 9 11 13 15 17 19
// The Sum of odd Natural Number upto 10 terms : 100

#include <stdio.h>

int main(){
  int i, n, on, sum=0;
  printf("Enter number of terms: \n");
  scanf("%d", &n);
  printf("The odd numbers are: ");
  
  for(i = 1; i<=n; i++){
      on = 2*i-1;
      printf("%d ", on);
      sum += on;
    }
    printf("\nThe sum of %d terms odd number is %d.\n", n, sum);
  
  return 0;
}