#include<stdio.h>
#include<conio.h>
void main()
{
char a[100],b[100];                                   x
int i=0,c=0;
clrscr();
printf("enter string:\n");
scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	c++;
	printf("letter= %d \n a[i] = %s\n reverse-->",c,a);
	for(i=c;i>=0;i--)
	printf(" %c",a[i]);
	for(i=0;a[i]!='\0';i++)
	b[i]=a[i];
	printf("\n b[i]=");
	for(i=0;a[i]!='\0';i++)
	printf(" %c",b[i]);
	printf("\n reverse-->>");
	for(i=c-1;i>=0;i--)
	printf(" %c",b[i]);
getch();}
