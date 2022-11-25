#include<iostream>
using namespace std;
class data
{
  private:
  string name;
  char bg;
  string address;
  string dob;
  string cldiv;
  string lic; 
  static int c;
  int roll;
  long int phone;

  public:
  data();
  static int getcount();
  void getdata();
  void show();
  data(data*obj);
  data(int roll,string name,long int phone,string address,string dob,string cldiv,string lic);
  ~data();
  
};

int data::c=0;
data::data(data*obj)

{
 cout<<"\ncopy constructor implemented"<<endl;
}

data::~data()
{
 cout<<"\n destructor called"<<endl;
}

void data::getdata()
{
 cout<<"enter the roll no"<<endl;
 cin>>roll;
 cout<<"Enter the name"<<endl;
 cin>>name;
 cout<<"Enter the telephone no."<<endl;
 cin>>phone;
 cout<<"Enter the address"<<endl;
 cin>>address;
 cout<<"Enter the D.O.B"<<endl;
 cin>>dob;
 cout<<"Enter class and division"<<endl;
 cin>>cldiv;
 cout<<"Enter the license number"<<endl;
 cin>>lic;
}

void data::show()
{
  cout<<"Roll Number:"<<roll<<endl;
  cout<<"Name:"<<name<<endl;
  cout<<"Telephone number:"<<phone<<endl;
  cout<<"Address:"<<address<<endl;
  cout<<"Date of Birth:"<<dob<<endl;
  cout<<"Class and Division:"<<cldiv<<endl;
  cout<<"Licence Number:"<<lic<<endl;
}

data::data(int roll,string name,long int phone,string address,string dob,string cldiv,string lic)
{
 cout<<"\n parametererised constructor"<<endl;
 c++;
 this->roll=roll;
 this->name=name;
 this->phone=phone;
 this->address=address;
 this->dob=dob;
 this->cldiv=cldiv;
 this->lic=lic;
} 

data::data()
{
 roll=0;
 name="NAME";
 phone=0;
 address="Address";
 dob="DOB";
 cldiv="class and division";
 lic="Licence number";
 cout<<"Default Constructor"<<endl;
 c++;
}

int data::getcount()
{
 return c;
} 
int main()
{
int num;
data *d1= new data();
d1->show();
delete d1;
data *d2=new data(44,"Vedant",8888888888,"Ravet","26.06.03","SE B","N.A.");
d2->show();
data *d3=new data(d2);
d3->show();
delete d2;
cout<<"\nEnter size of database";
cin>>num;
data dx[num];
for(int i=0;i<num;i++)
{
dx[i].getdata();
}
for(int i=0;i<num;i++)
{
dx[i].show();
}
cout<<"Number of constructor calls and total number of objects:"<<data::getcount()<<endl;
return 0;
}

 
 





















