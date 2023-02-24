class myclass:
    def __init__(self,str):
        self.str=str

    def func(self):
        str1=self.str
        ll=str1.split()
        ll.reverse()
        lr=" ".join(ll)
        print(lr)

    def count(self):
        c=0
        for i in range(0,len(self.str)):
            if(self.str[i].lower() in ['a','e','i','o','u']):
                c=c+1
        return c

s1=input("Enter String 1: ")
s2=input("Enter String 2: ")
s3=input("Enter String 3: ")

a=myclass(s1)
b=myclass(s2)
c=myclass(s3)

print("The reversed strings are:\n")
a.func()
b.func()
c.func()

x=[]
x.append((a.count(),a.str))
x.append((b.count(),b.str))
x.append((c.count(),c.str))
print(x)
x.sort()
x.reverse()

print("The strings in the descending order of number of vowels are:\n")
for i in range(0,len(x)):
    print(x[i][1],"\t-",x[i][0]," vowels")

# list1=[1,3,4]
# list1.reverse()
# print(list1)