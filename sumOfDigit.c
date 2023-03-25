//Write a program to compute sum of digits of a given integer numbeer. 

//Expected Output: 38939 = 3 + 8 + 9 + 3 + 9 = 32 

#include <stdio.h>

int main(){
  int num, sum = 0, digit, t; 
  
  printf("Enter an integer: \n");
  scanf("%d", &num);
  
  t = num;
  while (t!= 0){
    digit = t%10;
    sum += digit; 
    t = t/10;
  }

  printf("\nThe sum of the integer %d is: %d\n\n", num, sum);
  
  return 0;
}


