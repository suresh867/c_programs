/* Write a program that ask two operands and an operator among (+), (-), (*), (/). Depending 
upon the entered operator evaluate two operands and display the result. Use Switch Case statement. Also draw a flowchart. */

#include <stdio.h> 

int main(){
  
  float op1, op2, result;
  char opr;
  
  printf("\nEnter an operator: \n");
  printf("\n + : Addition, - : Subraction, / : Division, * : Multiplication E : exit\n\n");
  scanf("%c", &opr);
  
  printf("\n Enter the operands: \n");
  scanf("%f %f", &op1, &op2);

  
  switch(opr){
    case '+':
      result = op1 + op2;
      printf("\n Result: %f \n", result);
      break;
    case '-':
      result = op1 - op2;
      printf("\n Result: %f \n", result);
      break;
    case '/':
      result = op1 / op2;
      printf("\n Result: %f \n", result);
      break;
    case '*':
      result = op1 * op2;
      printf("\n Result: %f \n", result);
      break;
      
    default:
      printf("\n Enter a valid number!\n");
    
  }
  
  return 0;
}


/* FlowChart 


                                start
                                   |
                                   |        true 
                                  /\----------------> 
                              condition 1
                                  \/
                                   |    false
                                   |
                                   |
                                   ------->
*/
