#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b[10],i;
clrscr();
printf("enter a few number:\n");
 //1

	for(i=1;i<=5;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("\t 1> a[i]\n");
	for(i=1;i<=5;i++)
	{
	printf("%d\n",a[i]);
	}
 //2
	printf("\t 2> b[i] \n");
	for(i=1;i<=5;i++)
	{ b[i]=a[i];
	printf("%d\n",b[i]);
	}
//3
	printf("\t 3> reverse\n");
	for(i=5;i>=1;i--)
	{
	printf("%d\n",a[i]);
	}

getch();

}