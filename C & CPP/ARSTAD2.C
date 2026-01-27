#include<stdio.h>
#include<conio.h>
void main()
{
int i=0,j=0,ca=0,cb=0;
char a[50],b[50];
clrscr();

	printf("enter string a[i]:");
	scanf("%s",a);

	printf("enter string b[j]");
	scanf("%s",b);

	while(a[i]!='\0')
	{
	i++;
	ca++;
	}

	while(b[j]!='\0')
	{
	j++;
	cb++;
	}
	printf("\ncount of a[i] = %d",ca);
	printf("\ncount of b[j] = %d",cb);
	j=0;

	while(j!=cb)
	{
	a[i]=b[j];
	j++;
	i++;
	}
	a[i]='\0';
	printf("\n\n\tafter adding\n");
	printf("\n a[i] = %s",a);

getch();
}

