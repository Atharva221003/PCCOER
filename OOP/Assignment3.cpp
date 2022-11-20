#include <iostream>
using namespace std ;

class Marketing
{
public:
Marketing()
{
title = "" ;
price = 0.0 ;
}

void GetData()
{
cout << "\nEnter the title : " ;
cin >> title ;
cout << "\nEnter the price : " ;
cin >> price ;
}

void PutData()
{
try
{
if(title.length() < 3)
throw title;
if(price < 50)
throw price ;
}
catch(string)
{
cout << "\nError : Title below 3 letters. " ;
title = "" ;
}
catch(float )
{
cout << "\nError : Price below 50." ;
price = 0.0 ;
}
cout << "\nTitle : " << title << endl;
cout << "price : " << price << endl;
}

private :
string title ;
float price ;
};

class Book : public Marketing
{
public :
Book() : Marketing()
{
pages = 0 ;
}

void GetData()
{
Marketing :: GetData() ;
cout << "\nEnter the number of pages : " ;
cin >> pages ;
}

void PutData()
{
Marketing :: PutData() ;
try
{
if(pages < 0)
throw pages ;
}

catch(int)
{
cout << "\nError : Pages are less than 0" ;
pages = 0;
}
cout << "\nNumber of pages : " << pages << endl;
}

private :
int pages ;
};

class Tape : public Marketing
{
public :
Tape() : Marketing()
{
playtime = 0.0 ;
}

void GetData()
{
Marketing :: GetData() ;
cout << "\nEnter the playtime of tape : " ;
cin >> playtime ;
}

void PutData()
{
Marketing :: PutData() ;
try
{
if(playtime < 3.0)
throw playtime ;
}
catch(float)
{
cout << "\nError : Playtime is less" ;
playtime = 0.0 ;
}
cout << "Playtime of tape : " << playtime << endl ;
}

private :
float playtime ;
};


int main()
{
Book b ;
Tape t ;
cout << "\nEnter the data of Book : " ;
b.GetData() ;
b.PutData() ;
cout << "\nEnter the data of tape : " ;
t.GetData() ;
t.PutData() ;
return 0 ;
}