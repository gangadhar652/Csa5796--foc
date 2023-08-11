#include <stdio.h>
#include <math.h>
int factorial(int n) 
{
 if (n == 0 || n == 1) 
 {
 return 1;
 } 
 else 
 {
 return n * factorial(n - 1);
 }
}
int main() 
{
 double x, sum = 0.0;
 int n, sign = 1, i;
 printf("Enter the value of x (in radians): ");
 scanf("%lf", &x);
 printf("Enter the number of terms: ");
 scanf("%d", &n);
 for (i = 1; i <= n; i++) 
 {
 double term = sign * pow(x, (2 * i - 1)) / factorial(2 * i - 1);
 sum += term;
 sign = -sign;
 }
 printf("The value of sin(%lf) using %d terms is: %lf\n", x, n, sum);
 return 0;
}
