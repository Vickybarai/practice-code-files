#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],b[100],sum=0,n,i,j=0;
clrscr();

printf("enter a limit:\n");
scanf("%d",&n);

printf("enter a number:");

for(i=0;i<n;i++)
scanf("%d",&a[i]);

		for(i=3;i<6;i++)
		{
		b[j]=a[i];
		j++;
		}
		for(i=7;i<10;i++)
		{
		b[j]=a[i];
		j++;
		}

printf("\n count of j is => %d",j);

		for(i=0;i<j;i++)
		{
		printf("\n%d",b[i]);
		sum=sum+b[i];
		}
		printf("\nsum=%d",sum);

getch();
}