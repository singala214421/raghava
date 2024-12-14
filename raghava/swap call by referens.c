#include<stdio.h>
void swap(int*a,int*b);
int main()
{
	int m=22,n=44;
	printf("values before swap m=%d and n=%d\n",m,n);
	swap(&m,&n);
}
void swap(int*a,int*b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("\n values after swap a=%d and b=%d\n",*a,*b);
}
