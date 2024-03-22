#include<stdio.h>
int main()
{
  int arr[100], search, i, n;
  int count=0;
  count++;
  count++;
  printf("Enter no of elements\n");
  count++;
  scanf("%d", &n);
  count++;
  printf("Enter %d integer\n", n);
  count++;
  for (i = 0; i < n; i++)
  {
  	count++;
  	count++;
  	count++;
    scanf("%d", &arr[i]);
    count++;
  }
  count++;
  printf("Enter a number to search\n");
  count++;
  scanf("%d", &search);
  count++;
  for (i= 0; i<n; i++)
  {
  	count++;
  	count++;
  	count++;
    if (arr[i] == search)  
    {
    	count++;
      printf("%d is present at location %d.\n", search, i+1);
      break;
    }
    count++;
  }
  count++;
  if (i == n)
  {
    printf("%d isn't present in the array.\n", search);
}
count++;
    printf("time complexity is %d",count);

  return 0;
}
