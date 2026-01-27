#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{

int a[10]={1,2,3,4,5},i;
clrscr();

cout<<"enter number->>\n";
for(i=5;i<10;i++)
cin>>a[i];

for(i=0;i<10;i++)
cout<<" "<<a[i];

getch();
}
