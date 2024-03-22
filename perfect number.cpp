#include<stdio.h>
int sumdiv(int num, int x);

int main()
{
        int num;
        printf("Enter a number :");
        scanf("%d",&num);
        if(sumdiv(num, num/2) == num)
                printf("\nPerfect Number\n");
        else
                printf("\nNot Perfect Number\n");
}

int sumdiv(int num, int x)
{
        if(x==1)
                return 1;
        if(num%x==0)
                return x + sumdiv(num,x-1);
        else
                return sumdiv(num,x-1);
}
