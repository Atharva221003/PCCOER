#include<iostream>
#include<graphics.h>
#include<stdlib.h>
using namespace std;

class WalkingMan
{
int rhx,rhy;
public:
void draw(int,int);//rain
void draw(int);//walking man
};
void WalkingMan ::draw(int i){
line(20,380,580,380);//platform

if(i%2==0)
{
line(25+i,380,35+i,340);//leftleg
line(45+i,380,35+i,340);//right leg
line(35+i,310,25+i,330);//left hand
delay(20);
}
else
{
line(35+i,380,35+i,340);
line(35+i,310,40+i,330);
delay(20);
}

line (35+i,340,35+i,310);//body
circle(35+i,300,10);//head
line(35+i,310,50+i,330);//hand
line(50+i,330,50+i,280);//umbrella stick
line(15+i,280,85+i,280);//umbrella right
arc(50+i,280,0,180,35);//umbrella body
arc(45+i,330,180,0,5);//umbrella handle arc(x,y,start_angle,radius);
}
void WalkingMan::draw(int x,int y){
int j;
rhx=x;
rhy=y;
for(j=0;j<100;j++)
{
outtextxy(rand()%rhx,rand()%(rhy-50),"|");

setcolor(WHITE);
}
}
int main()
{
int gd=DETECT,gm;
int rhx,rhy,j,i;
WalkingMan obj;

initgraph(&gd,&gm,NULL);
for(i=0;i<500;i+=5)
{
obj.draw(i);
rhx=getmaxy();
rhy=getmaxy();
obj.draw(rhx,rhy);
delay(150);
cleardevice();
}
getch();
}

