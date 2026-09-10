def fuc(a) :
    if(a<0):
        return 0
    else:
        return fuc(a-1)+a

n=input()
n=int(n)
print(str(fuc(n)))
