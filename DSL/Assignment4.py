# a) Write a Python
# program to store names and mobile numbers of your friends in sorted order on
# names. Search your friend from list using binary search (recursive and
# non-recursive). Insert friend if not present 
# in phonebook

# b) Write a Python program to store names and mobile
# numbers of your friends in sorted order on names. Search your friend from list
# using Fibonacci search. Insert friend if not present in phonebook.

def min(x,y):
    if(x<y):
       return x
    else:
       return y


def fibsearch(arr, x1, n):
   f2=0
   f1=1
   fibM=f2+f1
   while(fibM<0):
       f2=f1
       f1=fibM
       fibM=f1+f2
   offset= -1
   while(fibM>1):
      i=min(offset+f2,n-1)
      if(arr[i][0]<x1):
         fibM=f1
         f1=f2
         f2=fibM-f1
         offset=i
      elif(arr[i][0]>x1):
         fibM=f2
         f1=f1-f2
         f2=fibM-f1
      else:
         return i
      if(f1 and arr[offset+1][0]==x1):
         return offset+1
   return -1;
  
  
  
  
  
def insert(phbk,x1):
    c=[x1]
    mob=int(input("\nenter the mobile number of your friend:"))
    c.append(mob)
    print(c)
    phbk.append(c)
    Display(phbk)
    print("\nfor binary fibonacci search the record must be in sorted order")
    sort(phbk)
      
def sort(phbk):
    for j in range(len(phbk)):
        swapped=False
        i=0
    while(i<len(phbk)-1):
        if(phbk[i][0]>phbk[i+1][0]):
             phbk[i],phbk[i+1]=phbk[i+1],phbk[i]
             swapped=True
        i=i+1
    #if(swapped==False):
        #break
        
    print("\nafter swapping the data in phonebook....")
    Display(phbk)  
    
    
    
def enterdata(phbk):
    c=[]
    x=input("\nenter the name of your friend: ")
    c.append(x)
    mob=int(input("\nenter the mobile number of your friend:"))
    c.append(mob)
    phbk.append(c)
    
def Display(phbk):
    for i in range(len(phbk)):
       print(phbk[i])
       print()
    
      
print("\nenter the details of your friends:")
phbk=[]
choice='Y'
while(choice=='Y' or choice=='y'):
     enterdata(phbk)
     choice=input("\ndo you want to add more friends y/n:")
     
Display(phbk)
    
n=len(phbk)    
x1=input("\nenter friend name you want to search")
result=fibsearch(phbk,x1,n) 

if(result !=-1):
   print("friend is present in your phonebook application")
else:
   print(x1," is not present in phonebook")
   print("record ", x1," is now inserted in phonebook.......")
   insert(phbk,x1)
   print("record ", x1 ," added sucessfully in phone book!")