#include <stdio.h>
int main() 
{
 int num1, num2, max;
 printf("Enter the values of num1 and num2: ");
 scanf("%d %d", &num1, &num2);
 printf("Original values: num1 = %d, num2 = %d\n", num1, num2);
 if (num1 > num2) 
 {
 max = num1;
 } else 
 {
 max = num2;
 }
 printf("The biggest number is: %d\n", max);
 return 0;
}
