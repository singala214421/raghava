#include<stdio.h>
void main()
{
	int n[10];
	int i;
	printf("Enter the value for Roll number");
	for(i=0; i<10; i++)
	{
		scanf("%d\n", &n[i]);
	}
	    for(i=0; i<10; i++)
	{
		printf("%d\n",n[i]);
	}
}
