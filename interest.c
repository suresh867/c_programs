/* A bank has decided to provide interest rate in fixed deposite account as 5% for less than or equal to 2 years, 6% for greater than 2 years and less than or equal to 5 years and 7% for more than 5 years. 
Write a program to read principle, time period from keyboard and calculate the amount that will be after specified period, according to the policy.*/

#include <stdio.h>

int main (){
  float i, p, t, r, a; 
  
  printf("\nEnter the principle amount and the time period: \n");
  scanf("%f %f", &p, &t);
  
  if (t<= 2 ){
    r = 5;
  }
  else if(t> 2 && t <= 5){
    r = 6;
  }
  else
  r = 7;
  
  i = (p * t * r)/100;
  printf("The interest is %f\n", i);
  
  a = p + i; 
  
  printf("\nThe total amount with interest is %f\n", a);
  
  
  return 0; 
}