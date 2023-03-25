//Write a program to find  a to the power b. 

//Expected output:  4 to the power 3 = 64 

#include <stdio.h>

int main(){
  int a, b, i, ans;
  
  printf("\nEnter the base and the power respectively: \n");
  scanf("%d %d", &a, &b);
  
  for (i = 1; i <= b; i++){
    ans *= a;
  }
  printf("\nThe %d to the power %d is %d\n", a, b, ans);
  
  return 0; 
}