num = input()
num = int(num)

def printLine(n) :
    for i in range(1,n+1) :
        print(str(i),end = ' ')
    print()

for i in range(1, num+1) :
    printLine(i)
for i in range(1, num+1) :
    printLine(num+1-i)