//write a program to declare one dimensional array   
#include<stdio.h>
#include<stdlib.h>
void main()
{
	//static method
	int a[5]={10,20,30,40,50,};
	//direct method 
	int b[5];
	b[0]=11;
	b[1]=22;
	b[2]=33;
	b[3]=44;
	b[4]=55;
	//Interactive method
	int c [5];
	int i;
	
	printf("Enter value for c Array\n");
	for (i=0; i<5;i++)
	     scanf("%d",&c[i]);
	     
    printf("contents of Array a\n");
    for (i=0;i<5; i++)
     printf("%d\n",a[i]);
     
	printf("contents of Array b\n");
    for (i=0;i<5; i++)
     printf("%d\n",b[i]);
    
    printf("contents of Array c\n");
    for (i=0;i<5; i++)
     printf("%d\n",c[i]);
     
}
