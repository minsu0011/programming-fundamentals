import random
arr=[]
m=0
for i in range(1,101): 
     arr.append(random.randint(1,1000))
for j in range(0,100):
    print(arr[j] , end=' ')
    if(int(arr[j])>m):
        m=int(arr[j])
print('',end='\n\n')
print('max value: '+str(m))