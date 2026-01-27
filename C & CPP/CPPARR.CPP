#include<stdio.h>
#include<iostream.h>
#include<conio.h>
void main()
{
int a[10],b[10],i,c[10];
clrscr();

cout<<"enter number of a:\n";
for(i=1;i<=5;i++)
cin>>a[i];

cout<<"enter number of b:\n";
for(i=1;i<=5;i++)
cin>>b[i];

	for(i=1;i<=5;i++)
	c[i]=a[i];
	for(i=1;i<=5;i++)
	c[i+5]=b[i];

for(i=1;i<=10;i++)
cout<<" "<<c[i];
cout<<"\n\trevers\n";
for(i=10;i>=1;i--)
cout<<" "<<c[i];
getch();
}