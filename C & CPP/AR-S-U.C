#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,j,n,b[100];
clrscr();
printf("enter limit:");
scanf("%d",&n);

for(i=0;i<n;i++)
scanf("%d",&a[i]);


	for(i=0;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[j]==a[i])
			{
			 b[i]=a[i];
				printf("\n repeated number:%d ",a[i]);

			}

		}
	}

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[j]!=a[i])
			{
				printf("\n unique number:%d ",a[i]);

				break;
			}

		}
	}

	printf("\n b[i] number:%d ",b[i]);

getch();
	}
