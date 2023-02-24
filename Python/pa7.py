class student:
    def __init__(self,name,age,marks):
        self.name=name
        self.age=age
        self.marks=marks
    def dis(self):
        print(self.name,"\t",self.age,"\t",self.marks)
    
    def accept(self):
        self.name=input("enter name")
        self.name=input("enter age")
        for i in range(0,3):
            m=int(input("Enter marks"))
            self.marks.append(m)


a=student(",",[])
a.accept()
a.dis()

    