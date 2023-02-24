import random
x,y,z='hi','hello','hey'
print(x,y,z) #x,y and z can be of different types
a,b='bread','eggs'
print(a)
print(b)
print(a + b) #a and b must be of same datatype; for numbers they work as addition operator
p,q=2,6
print(p+q)

print(random.randrange(4,9))

"""THIS IS A COMMENT
OF A LINE"""

g= """hi
imma gonna die
with headache"""
print(g)

st="this is a cat and it drank milk"
print("This" in st)       #case sensitive

que="Ieam deeps"
print(que[2:7])
print(que[4:])

print(st.split())
print(que.replace('e','y'))

addr="my {1} is deepa and my cat's {0} is popo"
print(addr.format(5,6))

m=22
n=77
addr="my {} is deepa and my cat's {} is popo"
print(addr.format(m,n))
