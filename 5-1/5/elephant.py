import random
ls=[]
def getRandomString(leng):
    global ls
    tmp=0
    for i in range(1,leng+1):
        tmp=random.randint(97,122)
        t=chr(tmp)
        ls.append(t)
    return ''.join(ls)

def eating(chosen):
    global generated
    global ls
    global Eaten_list
    global c
    print('Start eating \'' + chosen + '\'')
    Eaten_list.append(chosen)
    print('Eaten alphabet of cheese : ' + ' '.join(Eaten_list))
    print('Original cheese : ' + generated)
    print('Current cheese status : ',end='')
    for i in range(0,len(generated)):
        if(ls[i]==chosen):
            ls[i]='_'
            c+=1
        print(ls[i],end='')
    print('\n\n',end='')

cnt=0
Eaten_list = []
print('Input the length of the string : ',end='')
length=input()
length=int(length)
generated=getRandomString(length)
print('Generated Cheese is \'' + generated + '\'')
print('Mouse starts eating!!')
c=0
while(cnt<=9):
    chosen = chr(random.randint(97,122))
    if(chosen in Eaten_list):
        continue
    eating(chosen)
    cnt+=1
    if(c==length):
        print('Out of cheese!')
        break