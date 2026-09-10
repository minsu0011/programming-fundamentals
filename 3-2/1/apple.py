sm = 0
tmp = 10
while (True) :
    tmp = input()
    tmp = int(tmp)
    if(tmp==0):
        print('sum: ' + str(sm))
        break
    sm = sm + tmp