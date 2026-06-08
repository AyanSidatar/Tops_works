#include <stdio.h>

int main()
{
  int size, sum = 0, j, i;
  printf("Enter Size of Array -");
  scanf("%d", &size);

  int arr[size][size];
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      printf("Enter Number -");
      scanf("%d", &arr[i][j]);
    }
  }
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      printf("\t%d", arr[i][j]);
    }
    printf("\n");
  }

  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      if (i == j)
      {
        sum += arr[i][j];
      }
    }
  }

  printf("Sum of Daiognal Array Element is %d", sum);
}
