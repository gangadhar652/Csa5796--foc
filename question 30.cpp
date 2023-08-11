#include <stdio.h>
int linearSearch(int arr[], int n, int key) 
{
 int i;
 for (i = 0; i < n; i++) 
 {
 if (arr[i] == key) 
 {
 return i;
 }
 }
 return -1;
}
int main() 
{
 int n, i, key;
 printf("Enter the number of elements: ");
 scanf("%d", &n);
 int arr[n];
 printf("Enter the elements of the array:\n");
 for (i = 0; i < n; i++) 
 {
 scanf("%d", &arr[i]);
 }
 printf("Enter the element to search: ");
 scanf("%d", &key);
 int index = linearSearch(arr, n, key);
 if (index != -1) {
 printf("Element found at index %d\n", index);
 } else {
 printf("Element not found\n");
 }
 
