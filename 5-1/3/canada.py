arr = input()
arr = arr.split()
tmp=0
dict={}
for i in range(0,len(arr)):
    if(arr[i] not in dict.keys()):
        dict[arr[i]]=1
    else :
        dict[arr[i]] += 1

for i in dict :
    print(i + ': ' + str(dict[i]))