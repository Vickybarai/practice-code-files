#include<stdio.h>
#include<conio.h>

int evenodd(x)
{
	if(x %2==0)
	printf("%d is even",x);
	else
	printf("%d is odd",x);
	return 0;
}
int cube(x)
{      	printf("\n clube of %d =  %d",x,x*x*x);
	return 0;
}

int square(x)
{
	printf("\n square of %d =  %d",x,x*x);
	return 0;
}


void main()
{

	int a;
	clrscr();
	printf("enter a number:");
	scanf("%d",&a);
	evenodd(a);
	cube(a);
	square(a);

getch();}