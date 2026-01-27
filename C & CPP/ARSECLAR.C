#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,n,temp=0,j;
clrscr();
printf("enter limit:");
scanf("%d",&n);

for(i=0;i<n;i++)
scanf("%d",&a[i]);


	for(i=0;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		if(a[j]>a[i])
		{       temp=a[j];
			a[j]=a[i];
			a[i]=temp;
		}
	}
	printf("\n secondlargest number:%d ",a[1]);

getch();
getch();}
