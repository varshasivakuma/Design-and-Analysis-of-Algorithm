#include<stdio.h>
int gcd(int n1,int n2);
int main(){
	int n1,n2;
	printf("Enter two numbers n1 and n2:");
	scanf("%d%d",&n1,&n2);
	printf("gcd of two numbers is:%d",gcd(n1,n2));
	return 0;
}
int gcd(int n1,int n2){
	if(n2!=0){
		return gcd(n2,n1%n2);
	}
	else{
		return n1;
	}
}
