#include <stdio.h>
int main() 
{
 int n, i, num, max;
 printf("Enter the value of n: ");
 scanf("%d", &n);
 printf("Enter integer 1: ");
 scanf("%d", &max);
 for (i = 2; i <= n; i++) 
 {
 printf("Enter integer %d: ", i);
 scanf("%d", &num);
 if (num > max) 
 {
 max = num;
 }
 }
 printf("The biggest number is: %d\n", max);
 return 0;
}
