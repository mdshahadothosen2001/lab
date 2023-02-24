#include <stdio.h>
int bin(int array[], int x,int end) {
int beg=0,loc=-1;
  while (beg <= end) {
    int mid = beg + (end - beg) / 2;
    if (array[mid] == x)
      return mid;
    if (array[mid] < x)
      beg = mid + 1;
    else
      end = mid - 1;
  }

  return loc;
}
int main() {
    int size,i,item;
    printf(" Enter array size: ");
    scanf(" %d",&size);
  int array[size];
   printf("Enter Array element: ");
  for(i=0; i<size; i++)
    scanf("%d",&array[i]);
  printf("Enter item: ");
  scanf("%d",&item);
  int result = bin(array, item,size - 1);
  if (result == -1)
    printf("\nNot found this item");
  else
    printf("\nElement is found at index is %d \n", result+1);
  return 0;
}
