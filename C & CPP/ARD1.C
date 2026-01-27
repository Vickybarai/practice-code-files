#include<stdio.h>
#include<conio.h>
void main()
{
int i;
char a[100];
clrscr();
for(i=0;i<5;i++){
printf("enter string a[%d]:\n",i+1);
scanf("%s",a[i]);  }

//for(i=0;a[i]='\0';i++)
for(i=0;i<5;i++)  {
printf("\n\t a[%d]=%s\n",i+1,a[i]);  }
getch();
}