#include<iostream>
using namespace std;
template<class T>
class sort
{
public:
       void swap(T *p,T *q)
                {
                T r;
                r=*p;
                *p=*q;
                *q=r;
                }
       void selectsort(T a[],int num)
                {int min;
                  for(int i=0;i<num;i++)
                          {min=i;
                          for(int j=i+1;j<num;j++)
                                  {
                                  if(a[j]<a[min])
                                          {
                                            min=j;
                                          }
                                  }                   
                          swap(&a[i],&a[min]);
                          }
                  }
       void print(T a[],int num)
               {
                cout<<"Sorted array is: "<<endl;
                for(int i=0;i<num;i++)
                        {
                        cout<<a[i]<<"\t";
                        }
                }
};
int main()
{
int num,ch;
char choice;
sort<int>a1;
sort<float>a2;
int arr1[20];
float arr2[20];
do{
cout<<"Select any one option from below:\n1)Integer array\n2)Float array"<<endl;
cin>>ch;
switch(ch)
{
case 1 :cout<<"Enter the size of array: ";
        cin>>num;
        cout<<"Enter the elements of array: "<<endl;
        
        for(int i=0;i<num;i++)
                {
                 cin>>arr1[i];
                }
        a1.selectsort(arr1,num);          
        a1.print(arr1,num);
        break;
case 2:cout<<"Enter the size of array: ";
       cin>>num;
       cout<<"Enter the elements of array: "<<endl;
        
       for(int i=0;i<num;i++)
               {
                cin>>arr2[i];
               }
       a2.selectsort(arr2,num);          
       a2.print(arr2,num);
       break;
default : cout<<"You entered wrong choice"<<endl;
}        
cout<<"Do u wish 2 continue (y/n)?"<<endl;      
cin>>choice;
}while(choice=='y'||choice=='Y');
       return 0;
}

                                                                       
