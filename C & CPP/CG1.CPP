
	  //program for DDA
#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
int x1,y1,x2,y2;
int dx , dy, length , k , xinc , yinc ,x,y;
clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

cout<<"Enter the two left end pixel points (xa,ya):\n";
cin>>x1>>y1;
cout<<"Enter the two right end pixel points(xb,yb):\n";
cin>>x2>>y2;
dx=x2-x1;
dy=y2-y1;
if (abs(dx)>abs(dy))  //absolute value
length=abs(dx);       //if line is horizantal. its set x coordinates
else
length=abs(dy);       // similar,y coordinates
xinc=dx/length;       //calculate increment each step in x
yinc=dy/length;       // similar,y step in y

x=x1;                 //initialize starting x co-orditinate
y=y1;                 //y co-orditinate.
for(k=1;k<=length;k++)// loop run length time to draw line
{
putpixel(ceil(x),ceil(y),6); // 6 for color //ceil function for nearest floting point
x=x+xinc; //update x and y co-ord. next pixel.
y=y+yinc;
}

getch();


}