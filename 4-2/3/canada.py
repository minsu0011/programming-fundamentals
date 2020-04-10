def printStarDia(n) :
    tmp=0
    for i in range(1,n+1):
        for h in range(1,n-i+1):
            print('',end=' ')
        for j in range(1,i+1):
            print('* ',end='')
        print()
    for i in range(1,n+1):
        tmp = n+1-i
        for h in range(1,n-tmp+1):
            print('',end=' ')
        for j in range(1,tmp+1):
            print('* ',end='')
        print()
num = input()
num = int(num)
printStarDia(num)