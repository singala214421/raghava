#include<stdio.h>
void main()
{
	int i;
	int j=5;
	for(i=1; i<=j; i++)
	{
		if (i==5)
		{
			continue;
		}
		printf("Hello %d\n",i);
	}
}
