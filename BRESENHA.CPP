#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
int main()
{
	int gd=DETECT,gm;
	int x1,y1,x2,y2,dx,dy,pk;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	cout<<"Enter values of x1 and y1"<<endl;
	cin>>x1>>y1;
	cout<<"Enter values of x2 and y2"<<endl;
	cin>>x2>>y2;
	dx=x2-x1;
	dy=y2-y1;
	putpixel(x1,y1,3);
	pk=3*dy-dx;
	while(x1<x2)
	{
		if(pk>0)
		{
			x1+=1;
			y1+=1;
			putpixel(x1,y1,3);
			pk+=2*dy-2*dx;
		}
		if(pk<0)
		{
			x1+=1;
			putpixel(x1,y1,3);
			pk+=2*dy;
		}
	}
	getch();
	return 0;
}

