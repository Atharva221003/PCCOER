#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
class pixel
{
    protected:
    float x,y,x1,y1,x2,y2,c;
    public:
    pixel()
    {
      x=0;
      y=0;
      c=11;
    }
   
    void put()
    {
      putpixel(x,y,11);
    }
}p;
    class line:public pixel
    {
      public:
      float dx,dy,m,steps,xi,yi;
      void take()
      {
         cout<<"\nEnter coordinates of line: \nP1 ";
         cin>>x1>>y1;
         cout<<"\nEnter coordinates of line:\nP2 ";
         cin>>x2>>y2;
      }
     void lin(int x1,int y1,int x2, int y2)
     {
       dx=x2-x1;
       dy=y2-y1;
       if(abs(dx)>abs(dy))
       
         steps=abs(dx);
       
       else
       
         steps=abs(dy);
       
     xi=dx/steps;
     yi=dy/steps;
   
    x=x1+0.5;
    y=y1+0.5;
    put();
   
    for(int i=1;i<=steps;i++)
    {
      x=x+xi;
      y=y+yi;
      put();
      delay(5);
    }
   }
   
}l;

int main()
{
   int gd=DETECT,gm=DETECT;
   initgraph(&gd,&gm,NULL);
   l.lin(100,100,400,100);
   l.lin(100,400,400,400);
   l.lin(100,100,100,400);
   l.lin(400,100,400,400);
   l.lin(250,100,100,250);
   l.lin(100,250,250,400);
   l.lin(250,100,400,250);
   l.lin(400,250,250,400);
   l.lin(175,175,325,175);
   l.lin(175,325,325,325);
   l.lin(175,175,175,325);
   l.lin(325,175,325,325);
   closegraph();
   return 0;
}