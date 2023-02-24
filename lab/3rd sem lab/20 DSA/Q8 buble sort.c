#include <stdio.h>

int main()
{
  int elem[1000], num, i, j, temp;
  printf("Number of  Array size\n");
  scanf("%d", &num);
  printf("ENTER %d INTEGERS\n", num);
  for (i = 0; i < num; i++)
    scanf("%d", &elem[i]);
  for (i = 0 ; i < num - 1; i++)
  {
    for (j = 0 ; j < num - i - 1; j++)
    {
      if (elem[j] > elem[j+1])
      {
        temp= elem[j];
        elem[j]   = elem[j+1];
        elem[j+1] = temp;
      }
    }
  }
  printf("Sorted Array Ascending Order:\n");
  for (i = 0; i < num; i++)
     printf("%d\t", elem[i]);
  printf("\n");

  return 0;
}


