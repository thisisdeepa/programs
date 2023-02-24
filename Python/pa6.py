
def func():
    dict={'C':"carbon", 'B':"boron", 'He':"helium"}
    print(dict)

    print("Enter the key")
    k=input()

    if k in dict:
        print("ALREADY EXISTS")
    else:
        val=input("Enter the name")
        dict[k]=val

    print(dict)
    print(len(dict))

