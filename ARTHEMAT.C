#include<stdio.h>
#include<conio.h>
void main()
{
   int no1,no2,o1,o2,o3,o4,o5;
   clrscr();printf("enter the value inputs:");
   scanf("%d%d",&no1,&no2);
   o1=no1+no2;
   printf("sum of the value:%d\n",o1);
   o2=no1-no2;
   printf("sub of values:%d\n",o2);
   o3=no1*no2;
   printf("multiple of values:%d\n",o3);
   o4=no1/no2;
   printf("division of values:%d\n",o4);
   o5=no1%no2;
   printf("modulus of values:%d\n",o5);
   getch();
}

