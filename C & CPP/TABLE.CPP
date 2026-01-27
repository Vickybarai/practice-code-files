#include<stdio.h>
#include<conio.h>
void main()
{
int num,i;
clrscr();
printf("enter no:");
scanf("%d",&num);

if(num %2==0)
{
printf("\n its even no.");
}
else
{
printf("\n its odd no. \n");
}

for(i=1;i<=10;i++)
{
{
printf("\n %d * %d = %d",num,i,num*i);
}
}
 getch();
}