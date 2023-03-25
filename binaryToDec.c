//Write a program to convert Decimal to Binary.

#include <stdio.h>


int main(){
  int bin, i, dec, p, q;
  printf("\nEnter a decimal number: \n");
  scanf("%d", &dec);
  
 for (i =1; i<= 5; i++){
   if(dec%2 == 0){
     bin = 0;
   }
 }
  
  printf("The binary number of the %d is %d", dec, bin);
  
  return 0; 
}