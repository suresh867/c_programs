#include <stdio.h>

int main(){
  
  int i, prv = 0, pre = 1, n, temp;
  
  printf("Enter n numbers of fibonacci numbers: \n");
  scanf("%d", &n);
  
  printf("\nThe fibonacci of n terms are as: \n");
  for (i = 1; i < n; i++){
    temp = prv + pre; 
    printf("%d ", temp);
    prv = pre;
    pre = temp;
  }
  printf("\n");
  return 0;
}