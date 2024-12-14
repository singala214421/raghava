#include<stdio.h>
void main()
{
	int i,j,n;
	printf("input numbers of rows:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		/*print blank space*/
		for(j=1; j<=n;j++)
		printf(" ");
		for(j=1; j<=i;j++)
		printf("%d",j);
		for(j=i-1; j>=1;j--)
		printf("%d",j);
		printf("\n");
	}
}
