#include<stdio.h>
#include<conio.h>
	int prime(a)
	{       int i,cnt=0;
		for(i=1;i<=a;i++)
		{
		if(a%i==0)
		{
		cnt++;
		}
		}
	return cnt;
	}

	void main()
	{
	int a,b,i;
	clrscr();
	printf("enter a number:");
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		if(prime(i)==2)
		{
		 printf("\n--> %d",i);
		}

	}
	getch();}



