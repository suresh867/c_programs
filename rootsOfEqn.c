/* Write a C program to read the value of coefficients a, b, c of a quadratic equation ax2 + bx + c = 0
and find the real roots of the equation. If roots are imaginary, display the message, roots are imaginary. */

#include <stdio.h>
#include <math.h>

int main (){
  float a, b, c, x1, x2, d;
  
  printf("Enter the three coefficients: \n");
  scanf("%f %f %f", &a, &b, &c);
  d = b*b-4*a*c;
  printf("%f", d);
  
  
  if(d< 0){
    printf("\nRoots are imaginary!\n");
  }else{
    d = sqrt(d);
    
    x1 = (-b + d)/(2*a);
    x2 = (-b - d)/(2*a);
    
    printf("\nThe value of real roots are : %f and  %f\n", x1, x2);
  }
  
  return 0;
}