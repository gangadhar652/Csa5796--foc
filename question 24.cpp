#include <stdio.h>
int main() 
{
 int a, b, c, temp;
 printf("Enter the values of a, b, and c: ");
 scanf("%d %d %d", &a, &b, &c);
 printf("Original values: a = %d, b = %d, c = %d\n", a, b, c);
 temp = a;
 a = b;
 b = c;
 c = temp;
 printf("Swapped values: a = %d, b = %d, c = %d\n", a, b, c);
 return 0;
}
