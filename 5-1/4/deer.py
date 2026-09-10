import random
def getRandomString(leng):
    ls=[]
    tmp=0
    for i in range(1,leng+1):
        tmp=random.randint(97,122)
        t=chr(tmp)
        ls.append(t)
    return ''.join(ls)
num = input()
num = int(num)
st=getRandomString(num)
print(st)