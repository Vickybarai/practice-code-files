#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],b[100],c[100],i,n;
clrscr();
printf("enter number limit: ");
scanf("%d",&n);

	for(i=0;i<n;i++)
	{   	printf("a[%d]-->> ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{   	printf("b[%d]-->> ",i);
		scanf("%d",&b[i]);
	}

	for(i=0;i<n;i++)
	{
	 c[i]=a[i]+b[i];
	 printf("\n sum of c[%d]-->> %d",i,c[i]);
	}

getch();}