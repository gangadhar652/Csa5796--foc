#include <stdio.h>
int main() 
{
 int number, digit, sum = 0;
 printf("Enter an integer number: ");
 scanf("%d", &number);
 while (number != 0) 
 {
 digit = number % 10;
 sum += digit;
 number /= 10;
 }
 printf("Sum of the digits: %d\n", sum);
 return 0;
}
