#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],b[100],c[100],i;
clrscr();

printf("enter number for a\n:");
for(i=1;i<=5;i++)
scanf("%d",&a[i]);
printf("enter number for b\n:");
for(i=1;i<=5;i++)
scanf("%d",&b[i]);

	for(i=1;i<=5;i++)
	c[i]=a[i];
	for(i=1;i<=5;i++)
	c[i+5]=b[i];

	for(i=1;i<=10;i++)
	printf(" %d ",c[i]);
	printf("\n \trevers:\n");
	for(i=10;i>=1;i--)
	printf(" %d ",c[i]);
getch();
}