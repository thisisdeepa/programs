t=()
arr=[]
def ctok(c):
    return (c+273.15)
def ftoc(f):
    return (f-32)*5/9
def ftok(f):
    return ((f-32)*5/9)+273.15
c=1
while(1):
    print("1. ctok 2.ftoc 3.ftok")
    cho=int(input("Enter choice"))
    if cho==1:
        k=ctok(7)
        if c==1:
            t=(7,k)
        else:
            t=(k,7)
        arr.append(t)

    elif cho==2:
         c=ftoc(10)
         if c==1:
            t=(10,c)
         else:
            t=(c,10)
         arr.append(t)
    elif cho==3:
        k=ftok(5)
        if c==1:
            t=(5,k)
        else:
            t=(k,5)
        arr.append(t)
    else:
        print("wrong")
        break

print(arr)
    

