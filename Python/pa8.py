from functools import reduce
myl=[]
for i in range(0,6):
    x=int(input())
    myl.append(x)
print(myl)
l2=[i*3 for i in myl]
print(l2)

sum1=reduce(lambda x,y:x+y,myl)
print(sum1)

sum2=reduce(lambda x,y:x+y,l2)
print(sum2)