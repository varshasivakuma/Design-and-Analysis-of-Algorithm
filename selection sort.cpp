#include<stdio.h>
int main()
{
	int a[20],i,j,swap,n;
	printf("enter no of elements:\n");
	scanf("%d",&n);
	printf("enter the elements in the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				swap=a[i];
				a[i]=a[j];
				a[j]=swap;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
