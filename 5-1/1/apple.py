dict={}
tmp1=input()
tmp1 = tmp1.split()
dict[tmp1[0]]=tmp1[1]
tmp2=input()
tmp2 = tmp2.split()
dict[tmp2[0]]=tmp2[1]
tmp3=input()
tmp3 = tmp3.split()
dict[tmp3[0]]=tmp3[1]
tmp4=input()
tmp4 = tmp4.split()
dict[tmp4[0]]=tmp4[1]
tmp5=input()
tmp5 = tmp5.split()
dict[tmp5[0]]=tmp5[1]
print('Which student\'s score?')
inp = input()
if(inp in dict):
    print(inp + '\'s score: ' + str(dict[inp]))
else :
    print(inp + ' is not in the database.')