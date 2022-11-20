#include<iostream>
using namespace std;
class complex
{
int x,y;
public:
complex()
 {
  x=0;
  y=0;
  }
friend void operator >>(complex &u, complex &v)
{
cout<<"Enter Real part for first no. (x1)";
cin>>u.x;
cout<<"Enter imaginary part for first no. (x1)";
cin>>u.y;
cout<<"Enter Real part for second no. (x1)";
cin>>v.x;
cout<<"Enter imaginary part for second no. (x1)";
cin>>v.y;
}
friend void operator >>(complex &u, complex &v)
{
cout<<"First complex no. is";
cout<<"Second complex no. is";
}
friend void operator +(complex &u, complex &v)
{
 complex add;
 add.x=u.x+v.x;
 add.y=u.y+v.y;
 if (add.y>0)
 cout<<" addition of the given complex nos.is"<<add.x<<"+"<<add.y<<"i";
 else
 cout<<" addition of the given complex nos.is"<<add.x<<(-1)*add.y<<"i";
}
friend void operator -(complex &u, complex &v)
{
 complex sub;
 sub.x=u.x+v.x;
 sub.y=u.y+v.y;
 if (sub.y>0)
 cout<<" Subtraction of the given complex nos.is"<<sub.x<<"+"<<sub.y<<"i";
 else
 cout<<" Subtraction  of the given complex nos.is"<<sub.x<<(-1)*sub.y<<"i";
}
friend void operator *(complex &u, complex &v)
{
 complex mul;
 mul.x=u.x+v.x;
 mul.y=u.y+v.y;
 if (mul.y>0)
 cout<<" mul of the given complex nos.is"<<mul.x<<"+"<<mul.y<<"i";
 else
 cout<<" mul of the given complex nos.is"<<mul.x<<(-1)*mul.y<<"i";
}
};
int main()
{
 char ch, des;
 complex s1,s2;
 operator >>(s1,s2);
 operator <<(s1,s2);
 do
 {
   cout<<"Choose operation to be performed";
   cout<<"(+)addition";
   cout<<"(-)Subtraction";
   cout<<"(*)mul";
   cin>>ch;
   switch(ch)
   {
    case:

    break;
    case:

    break;
    case:

    break;
   }


}