#include<stdio.h>
#include<conio.h>
void main()
{
int i=0,ca=0,cb=0;
char a[100],b[100];
clrscr();

printf("enter string a[i]:\n");
scanf("%s",a);
printf("enter string b[i]:\n");
scanf("%s",b);

	for(i=0;a[i]!='\0';i++)
	ca++;

	for(i=0;b[i]!='\0';i++)
	cb++;

	printf("\n a[i] cout = %d",ca);
	printf("\n b[j] cout = %d",cb);

	printf("\n\n\tafter adding\n");

	for(i=0;i<cb;i++)
	{
	a[ca+i]=b[i];
       }
	a[ca+cb]='\0';
  //	a[i]='\0';
	printf("\n a[i] = %s",a);
getch();
}


