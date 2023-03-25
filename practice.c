//Practice 1

//Write a program in C to make such a pattern like a right angle triangle with the number increased by 1. Go to the editor
// The pattern like :

//   1
//   2 3
//   4 5 6
//   7 8 9 10

// #include <stdio.h>

// int main(){
//   int i, j, n, k = 1;
  
//   printf("Enter the number of rows: ");
//   scanf("%d", &n);
  
//   for(i = 1; i<= n; i++){
//     for(j = 1; j<=i; j++){
//       printf("%d", k++);
//     }
//     printf("\n");
//   }

//   return 0;
// }


//Practice 2;


// Write a program in C to make a pyramid pattern with numbers increased by 1. Go to the editor
//   1 
//  2 3 
// 4 5 6 
// 7 8 9 10 

#include <stdio.h>

int main (){
  int i, n, j, k, spc, t= 1;
  
  printf("Enter the number of rows: \n");
  scanf("%d", &n);
  
  spc = n + 4 -1;
  for(i = 1; i<= n; i++){
    for(k = spc; k>= 1; k--){
      printf(" ");
    }
   
    for(j = 1; j<= i; j++)
      printf("%d", t++);
    printf("\n");
    spc--;

  }

  return 0;
}

