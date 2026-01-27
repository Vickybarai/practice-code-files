#include<iostream.h>
#include<conio.h>
void main()
{
int a[10],i;
clrscr();
for(i=1;i<=10;i++)
cin>>a[i];
	for(i=1;i<=10;i++)
	{	if(a[i] %2==0)
		{	cout<<"\neven are "<<a[i]; }
	}

	for(i=1;i<=10;i++)
	{	if(a[i] %2!=0)
		{   cout<<"\nodd are  "<<a[i]; }
	}

getch();
}