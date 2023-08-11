#include <stdio.h>
float calculateWaterBill(int usage) 
{
 float bill = 0.0;
 if (usage <= 1000) 
 {
 bill = 15.0;
 } else if (usage > 1000 && usage <= 2000) 
 {
 int extraUsage = usage - 1000;
 float extraCost = extraUsage * 0.0175;
 bill = 15.0 + extraCost;
 } else if (usage > 2000 && usage <= 3000) 
 {
 int extraUsage = usage - 2000;
 float extraCost = extraUsage * 0.02;
 bill = 15.0 + 0.0175 * 1000 + extraCost;
 } else if (usage > 3000) 
 {
 int extraUsage = usage - 3000;
 float extraCost = extraUsage * 0.02;
 bill = 15.0 + 0.0175 * 1000 + 0.02 * 1000 + extraCost;
 }
 return bill;
}
int main() 
{
 int usage;
 printf("Enter the cubic feet of water used: ");
 scanf("%d", &usage);
 float bill = calculateWaterBill(usage);
 printf("Water bill: $%.2f\n", bill);
 return 0;
}
