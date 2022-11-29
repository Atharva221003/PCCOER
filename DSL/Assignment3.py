# Write a Python program to compute following computation on matrix:

# a)Addition of two matrices
# b)Subtraction of two matrices
# c) Multiplication of two matrices
# d) Transpose of a matrix
def acceptOneD(a):
    print("\t   Enter Values & 00 to stop entering")
    i=1
    while(1):
        b=int(input("\t\t  %d :  "%i))
        if(b==00):
            return a
        i=i+1
        a.append(b)     


def acceptTwoD(a,r,c):
    k=1
    for i in range(r):
        x=[]
        for j in range(c):
            b=int(input("\t\t  %d :  "%i))
            k+=1
            x.append(b)
        a.append(x)
    for i in range(r):
            for j in range(c):
                        print(a[i][j], end = " ")
            print()
    return a     

def AddMatrics(a,b,r,c):
    y=[]
    for i in range(len(a)):
        x=[]
        for j in range(len(b)):
            x.append(a[i][j] + b[i][j])
        y.append(x)
    for i in range(r):
            for j in range(c):
                        print(y[i][j], end = " ")
            print()
    return y

def SubMatrics(a,b,r,c):
    y=[]
    for i in range(len(a)):
        x=[]
        for j in range(len(b)):
            x.append(a[i][j] - b[i][j])
        y.append(x)
    for i in range(r):
            for j in range(c):
                        print(y[i][j], end = " ")
            print()
    return y

def MultiplyMatrics(a,b,r1,c1,r2,c2):
    x=[]
    y=[]
    for k in range(r2):
        for i in range(r1):
                c=0
                for j in range(c2):
                    c = c + (a[i][j] * b[j][i] )
                x.append(c)
        y.append(x)
    for i in range(r1):
        for j in range(c2):
            print(y[i][j], end = " ")
        print()
    return y

def TransposeMatrics(a,r,c,T) :
 for i in range(c):
  a=[]
  for j in range(r):
   a.append(M[j][i])
  T.append(a)
 
def menu():
    fds1=[]
    fds2=[]
    while(1):
        a=int(input("\t\t 1 : Accept 1D arrays \n\t\t 2 : Accept 2D arrays \n\t\t 3 : Addition of 2 matrices \n\t\t 4 : Subtraction of 2 matrices \n\t\t 5 : Multiplication of 2 matrices \n\t\t 6 : Transpose of a matrix \n\t\t 7 : STOP \n\t"))
        if(a==7):
            break

        elif(a==1):
            
            print(acceptOneD(fds1))

        elif(a==2):
            row=int(input("\t  Enter NO. of rows :\t"))
            col=int(input("\t  Enter NO. of columns :\t"))
            acceptTwoD(fds1,row,col)
            print("Enter another array to perform operations \n")
            row2=int(input("\t  Enter NO. of rows :\t"))
            col2=int(input("\t  Enter NO. of columns :\t"))
            acceptTwoD(fds2,row2,col2)


        elif(a==3):
            AddMatrics(fds1,fds2,row,col)

        elif(a==4):
            SubMatrics(fds1,fds2,row,col)

        elif(a==5):
            MultiplyMatrics(fds1,fds2,row,col,row2,col2)
        elif(a==6):
            TransposeMatrics(fds1,row,col,fds1)
menu()       