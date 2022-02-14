/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int total,mark1,mark2;
  float avg;
  printf("enter marks=\n");
  scanf("%d", &mark1);
  printf("enter marks=\n");
  scanf("%d", &mark2);
  total=mark1+mark2;
  avg=total/2.0;
  printf("avg marks :%.2f",avg);
 

  return 0;
}

