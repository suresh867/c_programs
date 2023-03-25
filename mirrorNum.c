//Write a program to print following pattern: 

/*                                            1
                                          2   3   2 
                                      3   4   5   4   3 
                                  4   5   6   7   6   5   4
                                  
*/


#include <stdio.h>

int main (){
  int i, j, k,l, n;
  printf("Enter the number of rows: \n");
  scanf("%d", &n);
  
  for (i= 1; i<=n; i++){
    
    for(j = n; j>= i ; j--){
      printf("\t");
    }
    
    for (k = i-1; k>=i; k--){
      printf("%d \t", k);
    }
    
    for (l = 1; l<= i+1; l++){
      printf("%d \t", l);
    }
    
    printf("\n");
  }
  
  
  return 0;
}