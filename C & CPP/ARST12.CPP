#include<iostream.h>
#include<conio.h>
void main()
{
char a[100],b[100];
int i=0,c=0,j=0;
clrscr();
cout<<"enter string:\n";
cin>>"%s">>a;
	for(i=0;a[i]!='\0';i++)
	c++;
	cout<<"letter= %d \n a[i] = %s\n reverse-->",c,a;
	for(i=c;i>=0;i--)
	cout<<" %c",a[i];
	for(i=0;a[i]!='\0';i++)
	{	b[i]=a[i];
		j++;}
	cout<<"\n b[i]=";
	for(i=0;a[i]!='\0';i++)
	cout<<" %c",b[i];
	cout<<"\n revers-->>";
	for(i=c-1;i>=0;i--)
	cout<<" %c",b[i];
getch();}
