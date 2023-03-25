//Write a program to to compute LCM and HCF of two integers a and b. 

#include <stdio.h>
#include <math.h>

int main(){
  int n1, n2, lcm, hcf = 1, d, i;
  
  printf("Enter the first and second number respectively: \n");
  scanf("%d %d", &n1, &n2);
  
  d = (n1< n2) ? n1 : n2;
  printf("\n%d\n", d);
  for (i = 1; i<= sqrt(d); i++){
    
    if(n1%i == 0 && n2%i == 0){
      hcf = i;
    }
  }
  
  lcm = (n1 * n2)/hcf;
  printf("\nThe value of lcm and hcf of given two integers is %d and %d respectively!\n", lcm, hcf);
  
  return 0; 
}