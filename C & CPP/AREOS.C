#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],b[50],c[50],d[50],i,n,temp=0,j;
//   num ,even ,odd , sorting
clrscr();
printf("enter limit:");
scanf("%d",&n);

for(i=0;i<n;i++)
scanf("%d",&a[i]);

	for(i=0;i<n;i++)
	{ 	if(a[i] % 2==0 )
		{d[i]=  b[i]=a[i];
			printf("\nb[i] even -->>%d",b[i]);
		}
	}

	for(i=0;i<n;i++)
	{ 	if(a[i] % 2!=0 )
		{d[i]=  c[i]=a[i];
			printf("\nc[i] odd -->>%d",c[i]);
		}
	}

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		if(d[j]<d[i])
		{       temp=d[j];
			d[j]=d[i];
			d[i]=temp;
		}
	}

	for(i=0;i<n;i++)
	printf("\nd[i] sorting -->>%d",d[i]);
getch();
getch();}
