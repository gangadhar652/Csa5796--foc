#include <stdio.h>
int main() 
{
 int totalCredits = 0;
 float totalGradePoints = 0;
 int credit;
 char grade;
 printf("Enter the credit and grade for each course (enter 0 for credit to stop):\n");
 while (1) {
 printf("Credit: ");
 scanf("%d", &credit);
 if (credit == 0) 
 {
 break;
 }
 printf("Grade: ");
 scanf(" %c", &grade);
 switch (grade) 
 {
 case 'A':
 totalGradePoints += credit * 4.0;
 break;
 case 'B':
 totalGradePoints += credit * 3.0;
 break;
 case 'C':
 totalGradePoints += credit * 2.0;
 break;
 case 'D':
 totalGradePoints += credit * 1.0;
 break;
 case 'F':
 totalGradePoints += credit * 0.0;
 break;
 default:
 printf("Invalid grade entered.\n");
 continue;
 }
 totalCredits += credit;
 }
 if (totalCredits == 0) {
 printf("No courses entered.\n");
 } else {
 float gpa = totalGradePoints / totalCredits;
 printf("GPA: %.2f\n", gpa);
 }
 return 0;
}
