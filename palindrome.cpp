#include<stdio.h>
#include<string.h>
int main()
{         
		char a[100],b[100];
		printf("enter a string:");
		scanf("%s",&a);
			strcpy(b,a);
			strrev(a);
			if(strcmp(a,b)==0)
			{
				printf("its a palindrome");
			}
			else
			{
				printf("its not a palindrome");
			}
			return 0;
		}
