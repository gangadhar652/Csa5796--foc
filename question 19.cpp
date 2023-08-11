#include <stdio.h>
int main() 
{
 int number, remainder, reverse = 0;
 printf("Enter an integer number: ");
 scanf("%d", &number);
 while (number != 0) 
 {
 remainder = number % 10;
 reverse = reverse * 10 + remainder;
 number /= 10;
 }
 printf("Reversed number: %d\n", reverse);
 return 0;
}
