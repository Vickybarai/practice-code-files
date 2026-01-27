#include<iostream.h>
#include<conio.h>
void main()
{
int a[10],b[10],c[10],i,j=0;
clrscr();
	for(i=0;i<5;i++)
	{
	cin>>a[i];
	c[j]=a[i];
	j++;
	}
	for(i=0;i<5;i++)
	{
	cin>>b[i];
	c[j]=b[i];
	j++;
	}

	for(i=0;i<j;i++)
	cout<<"  "<<c[i];
getch();
}