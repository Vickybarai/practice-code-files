#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,j,temp,n;
int max ,min;
clrscr();
printf("enter a limit:");
scanf("%d",&n);
printf("enter a number:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{       for(j=i+1;j<n;j++)
		{       if(a[i]>a[j])
		       {
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}
	printf("\nAscending:\n");
		for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\ndescending:\n");
		for(i=n-1;i>=0;i--)
		printf("%d ",a[i]);

	for(i=0;i<n;i++)
		if(a[i]>max)
		{
		max=a[i] ;
		}
		printf("\nmaximum=%d",max);

	for(i=0;i<n;i++)
		if(a[i]<min)
		{
		min=a[i];
		}
		printf("\nminimum=%d",min);
getch();}