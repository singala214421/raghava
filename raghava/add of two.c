#include<stdio.h>
int add (int a,int b);
int main()
{
	int num1,num2,sum;
	printf("enter two numbers to add\n");
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	printf("sum=%d",sum);
	return 0;
}
int add (int a,int b)
{
	int add;
	add =a+b;
	return add;
}
