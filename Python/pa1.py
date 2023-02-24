mylist=[]
n=int(input("Enter the number of items"))
for i in range(0,n):
    a=int(input())
    mylist.insert(i,a)
print(mylist)
print(max(mylist))
print(min(mylist))
b=int(input("Enter new"))
ind=int(input("Enter the position"))
mylist.insert(ind-1,b)
print(mylist)

if 5 in mylist:
    mylist.remove(5)
else:
    print("no")

print(mylist)

if 8 in mylist:
    print(mylist.index(8)+1)
else:
    print("no")
