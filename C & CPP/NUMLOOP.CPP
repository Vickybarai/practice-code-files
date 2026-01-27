#include<stdio.h>
#include<conio.h>

void main()
{
int a,i,j,k,sp;
clrscr();
printf("ENTER NUMBER:");
scanf("%d",&a);
//1

for(i=1;i<=a;i++)
{

	for(j=1;j<=i;j++)
	printf("*");
	printf("\n");
}
//2
for(i=1;i<=a;i++)
{

	for(j=1;j<=i;j++)
	printf("%d",j);
	printf("\n");
}
//3
for(i=1;i<=a;i++)
{

	for(j=1;j<=i;j++)
	printf("%d",i);
	printf("\n");
}

//4
		  sp=a-1;
for(i=1;i<=a;i++)
{
		for(j=sp;j>=a;j++)
		{
		printf(" ");
		}

		for(k=1;k<=i;k++)
		{
		printf("*");
		}
printf("\n");

}

getch();
}