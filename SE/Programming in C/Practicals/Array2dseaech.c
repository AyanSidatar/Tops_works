#include <stdio.h>

int main()
{
  int size, sum = 0, j, i, search, found = 0;
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
  printf("Enter Number to Search -");
  scanf("%d", &search);

  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      if (arr[i][j] == search)
      {
        printf("Number Found at Index [%d][%d]", i, j);
        found = 1;
        break;
      }
    }
  }
  if (!found)
  {
    printf("Number Not Found");
  }
}