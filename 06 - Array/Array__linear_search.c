#include <stdio.h>
int main()
{
  int  item, i, n;

  printf("Enter number of elements in array\n");
  scanf("%d", &n);
  int array[n];

  printf("Enter %d integer(s)\n", n);
  for (i= 0; i < n; i++)
    scanf("%d", &array[i]);

  printf("Enter a number to search\n");
  scanf("%d", &item);

  int flag=0;
  for (i= 0; i < n; i++)
  {
    if (array[i] == item)    /* If required element is found */
    {
      printf("%d is present at location %d.\n", item, i+1);
      flag=1;
      break;
    }
  }
  if (flag==0)
    printf("%d isn't present in the array.\n", item);

  return 0;
}
