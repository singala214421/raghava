 #include<stdio.h>
#include<conio.h>
void main()
{ 
     char name [10];
     float unit,charge=100;
     //clrscr();
     printf("enter your name and unit cosumed:" );
     scanf("%s%f",name,&unit);
     if (unit<200)
     charge=charge+(200*0.8)+(unit-200*0.90);
     else
     charge=charge+(200*0.8)+(100*0.9)+((unit-300)*1);
     if (charge>400)
     charge= charge+(charge*0.15);
     printf("name:%s\ncharge:%f\n",name,charge);
     //getch();
}
