#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b[10],c[10],i,j,temp=0;
clrscr();

	printf("enter a[i] number:\n");
	for(i=0;i<5;i++) {
	scanf("%d",&a[i]); }
	//scaning

	printf("enter b[i] number :\n");
	for(i=0;i<5;i++)  {
	scanf("%d",&b[i]); }

	printf("sorting\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(b[j]<a[i])
			{
			temp=a[i];
			a[i]= b[j];
			b[j]=temp;
			c[i]=a[i];
			c[i+5]=b[j];
			}
	       }
	}

 /*	for(i=0;i<5;i++)
	{
	c[i]=a[i];
	c[i+5]=b[j];
	i++;
	}
 */

	for(i=0;i<10;i++)
	printf("c[%d] %d\n",i,c[i]);
	getch();

}