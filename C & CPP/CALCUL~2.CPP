#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b[10],i,j,c[10];
clrscr();

printf("enter a[i] numbers:");
for(i=1;i<=5;i++)
scanf("%d",&a[i]);

printf("enter b[i] numbers:");
for(i=1;i<=5;i++)
scanf("%d",&b[i]);

for(i=1;i<=5;i++)
printf("%d\t%d\n",a[i],b[i]);

c[j]=a[i]j++;
c[j]=b[i]j++;

for(i=1;i<=5;i++)
printf("%d",c[j]);

getch();
}