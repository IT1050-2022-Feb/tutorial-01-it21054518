/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
1
  float mark1;
  float mark2;
  float sum = 0;
  float avg = 0;

  printf("Enter subject1 mark : "); // read subject1 mark
  scanf("%f",&mark1); // read subject1 mark

  printf("Enter subject2 mark : "); // input subject2 mark
  scanf("%f",&mark2); // read subject2 mark

  sum = mark1 + mark2; // calculate the sum of the marks
  
  avg = sum / 2;// calculate the average of marks

  printf("\n\n");
  // display the sum and average
  printf("sum of the marks = %.2f\n", sum);
  printf("average of the marks = %.2f\n", avg); 
  
  return 0;
}

