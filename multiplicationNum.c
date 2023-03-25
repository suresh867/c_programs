//write a C program to find the multiplicative of user given  number.

#include <stdio.h>

int main(){
  int i, n, multiple;
  
  printf("Enter a number: \n");
  scanf("%d", &n);
  
  for (i = 1; i<= 10; i++){
    multiple = n*i;
    printf("%d * %d = %d\n", n, i, multiple);
  }
  return 0;
}
