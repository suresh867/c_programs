// Write a program in C to display a pattern like a right angle triangle using an asterisk.
// The pattern like :

// *
// **
// ***
// ****

#include <stdio.h>
int main(){
  int i, j, n;
  printf("Enter the number of rows: \n");
  scanf("%d", &n);
  
  for (i = 1; i<=n; i++){
    for(j= 1; j<= i; j++){
      printf("%d", j);    //uncomment this to print 1 to n number in right angle form. 
      // printf("%d", i);   uncomment this to print same number from 1 to n number in right angle form
     // printf("*");       //will print asterisk in right angle form. 
    }
    printf("\n");
  }
  
  return 0;
}