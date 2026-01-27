#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10],n,i,j,a,b;
clrscr();

printf("enter a array size number:\n");
scanf("%d",&n);//size

	printf("enter a number:");
	for(i=1;i<=n;i++)
	scanf("%d",&arr[i]);
	//scaning

	printf("enter number are\n:");
	for(i=1;i<=n;i++)
	printf("%d\n",arr[i]);
	//printing
/*
	printf("shorting larger number\n");
       for(i=1;i<=n;i++)
       {
	if(arr[0]>arr[i])
	{
	arr[0]=arr[i];
	}
	}//loop smallest number.

	printf("%d\n",arr[0]);
*/
 //2>
	printf("sorting\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(arr[i]<arr[j])
			{
			a=arr[i];
			arr[i]= arr[j];
			arr[j]=a;
			}
		}
	}

	for(i=1;i<=n;i++)
	{
	printf("%d\n",arr[i]);
	}
getch();

}