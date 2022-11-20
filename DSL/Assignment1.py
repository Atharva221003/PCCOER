Crick=[]
BadM=[]
FootB=[]

def accept(A,str):
        a=int(input("Enter number of students who like to play"))
        print("Enter names of students who like to play" ,str)
        for i in range(0,a):
                b=input("")
                A.append(b)
        print("successful")

def display(str):
        if(str=="cricket"):
                print(Crick)
        if(str=="badminton"):
                print(BadM)
        if(str=="football"):
                print(FootB)

accept(Crick,"cricket")
accept(BadM,"badminton")
accept(FootB,"football")

display("cricket")
display("badminton")
display("football")

cm=[]
def intersection(a=[],b=[]):
        c=[]
        for i in a:
                if i in b:
                        cm=c.append(i)
        return c
print(f"students playing both cricket & badminton are = {intersection(Crick,BadM)}")

def twosetonly(a=[],b=[]):
        only=a+b
        for i in intersection(Crick,BadM):
                only.remove(i)
                only.remove(i)
        print(f"students playing eighther cricket or badminton but not both are = {only}")

def Not2but3rd(a=[],b=[],c=[]):
        for i in c:
                if i in a:
                        c.remove(i)
        for i in c:
                if i in b:
                        c.remove(i)
        print(f"students who play football but not cricket & badminton are = {c}")

def TwoButNot3rd(a=[],b=[],c=[]):
        g=a+b
        h=intersection(a,b)
        for i in c:
                if i in g:
                        g.remove(i)
        for i in g:
                if i in h:
                        g.remove(i)
        print(f"students who play football & cricket but not badminton are = {g}")

intersection(Crick,BadM)
twosetonly(Crick,BadM)
Not2but3rd(Crick,BadM,FootB)
TwoButNot3rd(Crick,FootB,BadM)