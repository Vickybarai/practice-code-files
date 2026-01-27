#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,ca=0,cb=0;
char a[100],b[100],c[100];
clrscr();

printf("enter a[i] string :");
scanf("%s",&a);

printf("enter b[i] string :");
scanf("%s",&b);

	for(i=0;a[i]!='\0';i++)
	{	ca++;
		c[i]=a[i];
	}

	for(j=0;b[j]!='\0';j++)
	cb++;

	for(j=0;j!=cb;j++)
	{
		c[i]=b[j];
		i++;
	}

	printf("\na[i] string is of:%d",ca);
	printf("\nb[i] string is of:%d",cb);
	c[i]='\0';

	printf("\nc[i]--> %s \nreverse:\n",c);
	for(c[i]='\0';i>=0;i--)
	printf(" %c",c[i]);
getch();}