#include <stdio.h>
int main() 
{
 int n, num, sum = 0;
 float average;
 printf("Enter the value of n: ");
 scanf("%d", &n);
 for (int i = 1; i <= n; i++) 
 {
 printf("Enter number %d: ", i);
 scanf("%d", &num);
 sum += num;
 }
 average = (float) sum / n;
 printf("Sum = %d\n", sum);
 printf("Average = %.2f\n", average);
 return 0;
}
