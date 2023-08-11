#include <stdio.h>
int main() 
{
 int numPeople;
 int isCompanyBusiness;
 int isOver60;
 int basePrice;
 double discount;
 double totalCost;
 printf("Enter the number of people: ");
 scanf("%d", &numPeople);
 printf("Is the customer staying on company business? (0 for No, 1 for Yes): ");
 scanf("%d", &isCompanyBusiness);
 printf("Is the customer over 60 years of age? (0 for No, 1 for Yes): ");
 scanf("%d", &isOver60);
 if (numPeople == 2)
 basePrice = 85;
 else if (numPeople == 3)
 basePrice = 90;
 else if (numPeople == 4)
 basePrice = 95;
 else
 basePrice = 95 + (6 * (numPeople - 4));
 if (isCompanyBusiness)
 discount = 0.2 * basePrice;
 else if (isOver60)
 discount = 0.15 * basePrice;
 else
 discount = 0;
 totalCost = basePrice - discount;
 printf("Cost of the room: $%.2f\n", totalCost);
}
