#include<iostream>
using namespace std;
struct node
{    int roll;
      struct node *next;
};
class info
{        node *head1=NULL,*temp1=NULL,*head2=NULL,*temp2=NULL,*head=NULL,*temp=NULL,*h1=NULL,*head3=NULL,*temp3=NULL;
        int c,i,f,j,k;
       
        public:
    
            node  *create();
            void insert();
            void allstud();
            void vanila();
            void butters();
            void uice();
            void nice();
            void notice();
            void ovanila();
            void obutters();
            void display();   

           
            
} ;        
node *info::create()
{   node *p=new(struct node);
     cout<<"enter student rollno";
     cin>>c;
     p->roll=c;
     p->next=NULL;
     return  p;
  } 
  void info::insert()
  { 
       node *p=create();
   
     if(head==NULL)
     {    head=p;
     }
    else
    {      temp=head;
          while(temp->next!=NULL)
          {    temp=temp->next;   }
              temp->next=p;
     }        
         
   }
   void info::display()
   {  temp=head;
      while(temp->next!=NULL)
      { cout<<"\n"<<temp->roll;
        temp=temp->next;
      } cout<<"\n"<<temp->roll;
   }
   void info::allstud()
   {cout<<"enter no. of students";
       cin>>k;
        head=NULL;
       for(i=0;i<k;i++)
       {    insert();
             h1=head;
          
       }  display();
       head=NULL;
    }
    void info::vanila()
    {
       cout<<"enter no. of  students who like vanila";
       cin>>k;
        head=NULL;
       for(i=0;i<k;i++)
       { insert();
         head1=head;
          
       }  display();
        head=NULL;
     }
     void info::butters()
     {
      cout<<"enter no. of students who like butterscotch";
       cin>>j;
       for(i=0;i<j;i++)
       { insert();
         head2=head;
        
       } display();
       head=NULL;
     }
      void info::uice()
{    cout<<"students who like vanila or butterscotch\n";
     temp1=head1;
     while(temp1!=NULL)
     {
       node *p=new(struct node);
       p->roll=temp1->roll;
       p->next=NULL;     
     if(head3==NULL)
     {    head3=p;
     }
    else
    {      temp3=head3;
          while(temp3->next!=NULL)
          {    temp3=temp3->next;   }
              temp3->next=p;
     }
       
       temp1=temp1->next;
     }
     temp2=head2;
     while(temp2!=NULL)
     {    f=0;
         temp1=head1;
         while(temp1!=NULL)
         {
         if(temp2->roll==temp1->roll)
         { f=1;                   }
          temp1=temp1->next;
         } 
       
        
    
     if(f==0)
     {  
         node *p=new(struct node);
       p->roll=temp2->roll;
       p->next=NULL;     
       if(head3==NULL)
        {    head3=p;
        }
       else
       {      temp3=head3;
          while(temp3->next!=NULL)
          {    temp3=temp3->next;   }
              temp3->next=p;
       }
  }
      temp2=temp2->next;     
     }
     temp3=head3;
      while(temp3->next!=NULL)
      { cout<<"\n"<<temp3->roll;
        temp3=temp3->next;
      } cout<<"\n"<<temp3->roll;
}


void info::ovanila()
{
       cout<<"\nstudents  like only vanila \n";
       temp1=head1;
       while(temp1!=NULL)
       {  temp2=head2;
          f=0;
          while(temp2!=NULL)
          {   if(temp1->roll==temp2->roll)
              {  f=1;              }
               temp2=temp2->next;
          } 
         
          if(f==0)
          { cout<<"\n"<<temp1->roll;    }
             temp1=temp1->next;
        }
       
}
void info::obutters()
{
    
          
}
void info::nice()
{
       cout<<"\nstudents who like both vanila and butterscotch\n";
       temp1=head1;
       while(temp1!=NULL)
       { temp2=head2;
         while(temp2!=NULL)
         {  if(temp1->roll==temp2->roll)
             { cout<<"\n"<<temp1->roll;   }
              temp2=temp2->next;
          }
            
            temp1=temp1->next;
        }
        
}
 void info::notice()
 {

    cout<<"\nstudents who like neither vanila nor butterscotch\n";
    temp=h1;
       while(temp!=NULL)
       {  temp3=head3;
          f=0;
          while(temp3!=NULL)
          {   if(temp->roll==temp3->roll)
              {  f=1;              }
               temp3=temp3->next;
          } 
         
          if(f==0)
          { cout<<"\n"<<temp->roll;    }
             temp=temp->next;
        }
      
}
 
int main()
  { info s;
  int i;
   
          char ch;
       do{
          cout<<"\n choice the options";
          cout<<"\n  1. To enter all students rollno  ";
          cout<<"\n  2. To enter the rollno of student who like vanila";
          cout<<"\n  3.  To enter the rollno of student who like butterscotch";
          cout<<"\n  4.  To display the rollno of student who like vanila or butterscotch";
          cout<<"\n  5.  To display the rollno of student who like only vanila";
          cout<<"\n  6.  To display the rollno of student who like only butterscotch";
          cout<<"\n  7.  To display the rollno of student who like both vanila and butterscotch ";
          cout<<"\n  8.  To display the rollno of student who neither like vanila nor butterscotch";
        
  
          cin>>i;
         switch(i)
         {        case 1:   s.allstud();
                                  break;
         
                 case 2:   s.vanila(); 
                                  break;
                  case 3: s.butters();
                                  break;
                  case 4:   s.uice();
                                  break;
                  case 5:   s.ovanila();
                                  break;
                  case 6:   s. obutters();
                                  break;
                  case 7:   s.nice(); 
                                  break;
                  case 8:   s.notice();
                                  break;      
                
               
                                        
                  default:  cout<<"\n unknown choice";
          }
            cout<<"\n do you want to continue enter y/Y \n";
            cin>>ch;
       
       }while(ch=='y'||ch=='Y');   

return 0;
}


