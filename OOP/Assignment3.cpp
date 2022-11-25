#include<iostream>
#include<string.h>

using namespace std;

class Publication
{
  protected:
  string title;
  float price;
  public:
   void Set_Zero(void)                         
   {
     title="000";
     price = 0.0;
   }

   void getdata(void)
   {
     cout<<"\n\tEnter Title: "; 
     cin>>title;
     cout<<"\tEnter Price: ";  
     cin>>price;
   }

   void putdata(void)
   {
     cout<<"\n\tTitle: "<<title;
     cout<<"\tPrice: "<<price; 
   }
};

class Book : public Publication
{
  int page_count;
  public:
   void Set_Zero(void)                          
   {
     page_count=0;
     Publication::Set_Zero();
   }
   
   void getdata(void)
    {
     Publication::getdata();
     cout<<"\tEnter the number of pages: ";  
     cin>>page_count;
     try
      {
        
        if(price<0)
         throw (0);                             
        if(page_count<0) 
         throw (0.0);                           
      
      }
       catch(double x)
      {
        cout<<"\n\tException-- Page count cannot hold a negetive value:";
	cout<<"\n\tTurning all values to zero.";
         Set_Zero();
	
      }
      catch(int x)
      {
        cout<<"\n\tException-- Price cannot hold a negetive value:";
	cout<<"\n\tTurning all values to zero.";
         Set_Zero();
      } 
     
   }

   void putdata(void)
   {
     Publication::putdata();
     cout<<"\tNumber of pages: "<<page_count; 
     cout<<endl<<endl;
   }
};


class Tape : public Publication
{
  float playing_time;
  public:
   void Set_Zero(void)                         
   {
     playing_time=0.0;
     Publication::Set_Zero();
   }
   
   void getdata(void)
    {
     Publication::getdata();
     cout<<"\tEnter the playing time: ";  
     cin>>playing_time;
     try
      {
        
        if(price<0)
         throw 0;                               
       
        if(playing_time<0)
        throw (0.0);                    
        
      }
      catch(int x)
      {
        cout<<"\n\tException-- Price cannot be a negetive value:";
	cout<<"\n\tTurning all values to zero.";
         Set_Zero();
      } 
      catch(double x)
      {
        cout<<"\n\tException-- Playing time cannot be a negetive value:";
	cout<<"\n\tTurning all values to zero.";
         Set_Zero();
      }
   }

   void putdata(void)
   {
     Publication::putdata();
     cout<<"\tPlaying time: "<<playing_time; 
     cout<<endl<<endl;
   }
};

int main()
{
 Tape T;
 Book B;
 cout<<"\n\tEnter data of Tape :\n";
 T.getdata(); 
 T.putdata();
 cout<<"\n\tEnter data of Book :\n";
 B.getdata(); 
 B.putdata();
 return 0;
}

