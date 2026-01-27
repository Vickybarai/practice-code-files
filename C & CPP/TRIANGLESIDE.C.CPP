#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();

	printf("enter 3 value:");
	scanf("%d%d%d",&a,&b,&c);

	if(a==b && b==c && c==a)
	{
	printf("its equilateral");
	}
	else if(a==b || b==c || a==c )
	{
	printf("its isosceles");
	}
	else
	{
	printf("condition not satisfy");
	}


	getch();





}