class rect:
    def __init__(self,l,b):
        self.l=l
        self.b=b
    def area(self):
        return self.l*self.b

l1=int(input("Enter the len"))
b1=int(input("Enter the breadth"))
r1=rect(l1,b1)
print(r1.area())