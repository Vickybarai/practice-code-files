#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

void main()
{
int gd=DETECT,gm;
int x,y,x1,y1,x2,y2;
int length,k,xinc,yinc,dx,dy;
clrscr();
initgraph(&gm,&gd,"C:\\TURBOC3\\BGI");

cout<<"enter two left end point x1,y1: ";
cin>>x1,y1;
cout<<"enter two right end point x2,y2: ";
cin>>x2,y2;
dx=x2-x1;
dy=y2-y1;

if(abs(dx)>abs(dy))
 length =abs(dx);
else
 length =abs(dy);

xinc= dx/length;
yinc= dy/length;

x=x1;
y=y1;

for(k=1;k<=length;k++)
{
putpixel(ceil(x),ceil(y),6);
x=x+xinc;
y=y+yinc;
}
getch();
}