#include<iostream>
#include<math.h>
using namespace std;
class calculator
{
public:
int a,b;
void get()
 {
  cout<<"Enter Two operands";
  cin>>a>>b;
 }
void put()
 {
  cout<<"A="<<a<<"\t"<<"B="<<b;
 }
};
 int main()
{
 calculator c;
 c.get();
 c.put();
 char chr,cho;
do
 {
 cout<<"Enter the operator \n ";
 cout<<"(+) for Addition \n ";
 cout<<"(-) for substraction \n ";
 cout<<"(*) for Multiplication \n";
 cout<<"(/) for Division \n";
 cout<<"(^) for square \n";
 cout<<"(#) for square root \n";
 cin>>chr;
 switch(chr)
  {
  case '+':
      cout<<(c.a+c.b)<<"\t";
      break;
  case '-' :
      cout<<(c.a-c.b);
      break;
  case '*' :
      cout<<(c.a*c.b);
      break;
  case '/' :
      cout<<(c.a/c.b);
      break;
  case '^' :
      cout<<(c.a*c.a);
      break;  
  case '#' :
      cout<<sqrt(c.a);
      break;
 }
 cout<<"Do u want to use again Y/y or N/n";
 cin>>cho;
}
while(cho=='Y'||cho=='y');

return 0;
}