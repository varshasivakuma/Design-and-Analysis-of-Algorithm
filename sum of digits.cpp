#include<stdio.h>
int main(){
	int num,r,sum=0,i;
	printf("Enter a number:");
	scanf("%d",&num);
	while(num>0){
		r=num%10;
		sum=sum+r;
		num=num/10;
	}
	printf("The sum of digits is:%d",sum);
}
