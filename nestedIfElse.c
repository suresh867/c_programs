/*Define nested if-else statement with suitable flowchart. 

Write a C Program to check if user given input is exactly divisible by five or eleven, using 
nested if else statement. */

#include <stdio.h> 

int main(){
  int num1;
  
  printf("\nEnter a numbers: \n");
  scanf("%d", &num1);
  
  if(num1 % 5 == 0){
    if(num1 %11 == 0){
      printf("The entered number: %d is divisible by both 5 and 11! \n", num1);
    }
    else{
      printf("The entered number is: %d only divisible by 5! \n", num1);
    }
  }
  else{
   if(num1 % 11 == 0){
     printf("The entered number: %d is only divisible by 11! \n", num1);
   }
   else{
     printf("The entered number: %d is not divisible by both 5 and 11! \n", num1);
   }
  }
  
  return 0;
}
