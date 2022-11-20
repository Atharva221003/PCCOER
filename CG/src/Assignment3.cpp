#include<iostream>
#include<graphics.h>

using namespace std;
class drawpoly
{
public:
int x, y, temp, n, i, j, k, dy, dx;
int a[20][2],xi[20];
float slope[20];

void drawpoly1()
{
cout<<"\n Enter the no. of vertices of polygon";
cin>>n;
cout<<"Enter the co-ordinates one by one : ";
for(i=0;i<n;i++)
{
cout<<"X"<<i<<"Y"<<i<<":";
cin>>a[i][0]>>a[i][1];
}
a[n][0]=a[0][0];
a[n][1]=a[0][1];

for(i=0;i<n;i++)
{
line (a[i][0],a[i][1],a[i+1][0],a[i+1][1]);

}
getch();
}
}d;
class fillpoly : public drawpoly
{
public:
void fillpoly1()
{
for (i=1;i<n;i++)
{
dy=a[i+1][1] - a[i][1];
dx=a[i+1][0] - a[i][0];

if (dy==0)
{
slope[i]=1.0;
}
if(dx==0)
{
slope[i]=0.0;
}
if(dy!=0 && dx!=0)
{
slope[i]=(float)dx/dy;
}
}

for (y=0;y<480;y++)
{
k=0;
for(i=0;i<n;i++)
{
if(  (   (a[i][1]<=y) && (a[i+1][1]>y)  )   ||  ((a[i][1]>y)&& (a[i+1][1]<=y)))
{
xi[k]=(int)(a[i][0])+slope[i]*(y-a[i][1]);
k++;
}
}
for(j=0;j<k-1;j++)
{
for(i=0;i<k-1;i++)
{
if(xi[i]>xi[i+1])
{temp=xi[i];
xi[i]=xi[i+1];
xi[i+1]=temp;
}
}
setcolor(13);
for(i=0;i<k;i+=2)
{
line(xi[i],y,xi[i+1],y);
delay(20);
}
}
}
}
}f;
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,NULL);
f.drawpoly1();
f.fillpoly1();
closegraph();
return 0;
}